#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <locale>
#include <string>
using namespace std;

string formatIndian(double value)
{
    bool negative = (value < 0);
    double absVal = fabs(value);

    stringstream ss;
    ss << fixed << setprecision(2) << absVal;
    string full = ss.str();
    size_t dotPos = full.find('.');

    string intPart = (dotPos == string::npos) ? full : full.substr(0, dotPos); 
    string fracPart = (dotPos == string::npos) ? "" : full.substr(dotPos);

    int n = intPart.length();

    if (n <= 3) {
        return (negative ? "-" : "") + intPart + fracPart;
    }

    string suffix = intPart.substr(n - 3);
    string prefix = intPart.substr(0, n - 3);

    string groupedPrefix = "";
    int count = 0;
    for (int i = (int)prefix.length() - 1; i >= 0; --i) {
        groupedPrefix = prefix[i] + groupedPrefix;
        count++;
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
    double lumpSum, sipAmount, annualReturn, inflationRate, stepUpRate, usdRate;
    int years;

    cout << fixed << setprecision(2);

    // Input section
    cout << "Enter initial lump sum amount (₹): ";
    cin >> lumpSum;
    cout << "Enter monthly SIP amount (₹): ";
    cin >> sipAmount;
    cout << "Enter expected annual return (%): ";
    cin >> annualReturn;
    cout << "Enter expected annual inflation rate (%): ";
    cin >> inflationRate;
    cout << "Enter annual SIP step-up rate (%): ";
    cin >> stepUpRate;
    cout << "Enter investment duration (years): ";
    cin >> years;
    cout << "Enter current USD to INR conversion rate: ";
    cin >> usdRate;

    double r = annualReturn / 100.0;
    double i = inflationRate / 100.0;
    double g = stepUpRate / 100.0;
    int m = 12;

    double fvLumpSum = lumpSum * pow(1 + r / m, years * m);

    double fvSip = 0.0;
    double currentSip = sipAmount;

    for (int month = 1; month <= years * m; ++month)
    {
        fvSip += currentSip * pow(1 + r / m, (years * m) - month + 1);
        if (month % 12 == 0)
        {
            currentSip *= (1 + g);
        }
    }

    double fvTotal = fvLumpSum + fvSip;

    double fvReal = fvTotal / pow(1 + i, years);

    double fvUSD = fvReal / usdRate;

    cout << "\n========== RESULTS ==========\n";
    cout << "Future Value of Lump Sum: ₹" << formatIndian(fvLumpSum) << endl;
    cout << "Future Value of SIP (with step-up): ₹" << formatIndian(fvSip) << endl;
    cout << "----------------------------------\n";
    cout << "Total Nominal Corpus: ₹" << formatIndian(fvTotal) << endl;
    cout << "Inflation-adjusted (Real) Corpus: ₹" << formatIndian(fvReal) << endl;
    cout << "Inflation-adjusted Corpus (USD): $" << fixed << setprecision(2) << fvUSD << endl;
    cout << "==============================\n";

    return 0;
}
