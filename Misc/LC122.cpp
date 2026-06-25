#include <iostream>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int profit = 0;
    for (int i = 1; i < prices.size(); i++)
    {
        if (prices[i] > prices[i - 1])
        {
            profit += prices[i] - prices[i - 1];
        }
    }

    return profit;
}

int main()
{
    int n;
    cin >> n;

    vector<int> prices(n);

    for(int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    cout << maxProfit(prices) << endl;

    return 0;
}