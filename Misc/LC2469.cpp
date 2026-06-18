#include <iostream>
using namespace std;

vector<double> convertTemperature(double celsius)
{
    vector<double> ans;
    double k = celsius + 273.15;
    double f = celsius * 1.80 + 32.00;

    ans.push_back(k);
    ans.push_back(f);

    return ans;
}
int main()
{
    double celsius;
    cin >> celsius;

    vector<double> ans = convertTemperature(celsius);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}