#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

// Format a long double in Indian numbering style with 2 decimals
string formatIndian(long double value)
{
    bool negative = (value < 0.0L);
    long double absVal = fabsl(value);

    // Protect against NaN/inf
    if (!isfinite((double)absVal)) return (negative ? "-" : "") + string("Overflow");

    // Use stringstream to create fixed two-decimal representation
    std::ostringstream ss;
    ss << fixed << setprecision(2) << (double)absVal;
    string full = ss.str();

    size_t dotPos = full.find('.');
    string intPart = (dotPos == string::npos) ? full : full.substr(0, dotPos);
    string fracPart = (dotPos == string::npos) ? "" : full.substr(dotPos);

    int n = (int)intPart.length();
    if (n <= 3) return (negative ? "-" : "") + intPart + fracPart;

    string suffix = intPart.substr(n - 3);
    string prefix = intPart.substr(0, n - 3);

    string groupedPrefix = "";
    int count = 0;
    for (int i = (int)prefix.length() - 1; i >= 0; --i) {
        groupedPrefix = prefix[i] + groupedPrefix;
        ++count;
        if (count == 2 && i > 0) {
            groupedPrefix = "," + groupedPrefix;
            count = 0;
        }
    }

    string result = groupedPrefix + "," + suffix + fracPart;
    if (negative) result = "-" + result;
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double lumpSum, sipAmount, annualReturn, inflationRate, stepUpRate, usdRate;
    int years;

    cout << fixed << setprecision(2);

    // Input
    cout << "Enter initial lump sum amount (₹): ";
    if (!(cin >> lumpSum)) return 0;
    cout << "Enter monthly SIP amount (positive) or SWP amount (negative) (₹): ";
    if (!(cin >> sipAmount)) return 0;
    cout << "Enter expected annual return (%): ";
    if (!(cin >> annualReturn)) return 0;
    cout << "Enter expected annual inflation rate (%): ";
    if (!(cin >> inflationRate)) return 0;
    cout << "Enter annual SIP step-up rate (%): ";
    if (!(cin >> stepUpRate)) return 0;
    cout << "Enter investment duration (years): ";
    if (!(cin >> years)) return 0;
    cout << "Enter current USD to INR conversion rate: ";
    if (!(cin >> usdRate)) return 0;

    // Basic validation
    if (years <= 0) {
        cout << "Duration must be positive.\n";
        return 0;
    }
    if (usdRate <= 0.0L) {
        cout << "USD to INR rate must be positive.\n";
        return 0;
    }

    // Parameters
    const int m = 12;
    const int months = years * m;
    long double r = annualReturn / 100.0L;
    long double i = inflationRate / 100.0L;
    long double g = stepUpRate / 100.0L;
    long double monthlyRate = r / m;

    // Warn on unrealistic monthly rates
    if (monthlyRate > 1.0L) {
        cout << "Warning: monthly rate >100% is unrealistic and may overflow.\n";
    }

    // Separate corpuses for lump sum and SIP (so we can display both)
    long double lumpCorpus = lumpSum;
    long double sipCorpus  = 0.0L;     // accumulates SIP contributions and interest
    long double totalInvested = 0.0L;  // includes lumpSum + all positive SIPs (if SIP >=0)
    long double totalWithdrawn = 0.0L; // sums withdrawals when SIP < 0

    // Initialize totals
    if (lumpSum > 0.0L) totalInvested += lumpSum;

    // Current monthly flow (positive => contribution, negative => withdrawal)
    long double currentFlow = sipAmount;

    // For step-up semantics: Groww-style step-up is applied annually after 12 months.
    // We'll apply the step-up at the start of the new year (i.e., months 13,25,...)
    // Implementation: at beginning of loop for month>1 when (month-1)%12==0, apply step-up.
    for (int month = 1; month <= months; ++month)
    {
        // Apply annual step-up at start of month if appropriate (i.e., months 13,25,...)
        if (month > 1 && ((month - 1) % 12 == 0)) {
            currentFlow *= (1.0L + g);
        }

        if (currentFlow >= 0.0L) {
            // SIP contribution: add contribution first, then apply interest on SIP corpus & lump corpus
            sipCorpus += currentFlow;
            totalInvested += currentFlow;

            // Apply monthly interest to both corpuses
            lumpCorpus *= (1.0L + monthlyRate);
            sipCorpus  *= (1.0L + monthlyRate);
        }
        else {
            // SWP (withdrawal): apply interest first, then withdraw (this is a common convention)
            lumpCorpus *= (1.0L + monthlyRate);

            long double withdraw = fabsl(currentFlow);
            if (withdraw >= lumpCorpus) {
                // Withdraw whatever remains and stop withdrawals (corpus depleted)
                totalWithdrawn += lumpCorpus;
                lumpCorpus = 0.0L;
                // No further interest accrues on zero corpus; break the loop early
                // Note: if user also had SIP>0 they would still add; but here currentFlow < 0 implies withdrawals only
                break;
            } else {
                lumpCorpus -= withdraw;
                totalWithdrawn += withdraw;
            }
        }

        // safety: detect non-finite values
        if (!isfinite((double)lumpCorpus) || !isfinite((double)sipCorpus)) {
            cout << "Numeric overflow detected. Inputs produce values outside double range.\n";
            break;
        }
    }

    // Final calculations
    long double fvLump = lumpCorpus;        // future value of lump sum after months
    long double fvSip  = sipCorpus;         // future value of SIP corpus after months
    long double fvTotal = fvLump + fvSip;   // nominal corpus

    // Inflation adjustment: discount nominal corpus by (1 + i)^years
    long double fvReal = 0.0L;
    if (i != 0.0L) fvReal = fvTotal / powl(1.0L + i, (long double)years);
    else fvReal = fvTotal;

    long double fvUSD = fvReal / usdRate;

    // Output
    cout << "\n========== RESULTS ==========\n";
    if (sipAmount >= 0.0L) {
        cout << "Total Amount Invested (including Lump Sum): ₹" << formatIndian(totalInvested) << "\n";
        cout << "Future Value of Lump Sum: ₹" << formatIndian(fvLump) << "\n";
        cout << "Future Value of SIP (with step-up): ₹" << formatIndian(fvSip) << "\n";
        cout << "----------------------------------\n";
        cout << "Total Nominal Corpus: ₹" << formatIndian(fvTotal) << "\n";
        cout << "Inflation-adjusted (Real) Corpus: ₹" << formatIndian(fvReal) << "\n";
        cout << "Inflation-adjusted Corpus (USD): $" << fixed << setprecision(2) << (double)fvUSD << "\n";
    } else {
        cout << "Total Withdrawn during period: ₹" << formatIndian(totalWithdrawn) << "\n";
        cout << "Corpus Left After " << years << " years: ₹" << formatIndian(fvLump) << "\n";
        if (fvLump <= 0.0L) cout << "(Corpus depleted before end of period)\n";
        cout << "Inflation-adjusted Corpus: ₹" << formatIndian(fvReal) << "\n";
        cout << "Inflation-adjusted Corpus (USD): $" << fixed << setprecision(2) << (double)fvUSD << "\n";
    }
    cout << "==============================\n";

    return 0;
}
