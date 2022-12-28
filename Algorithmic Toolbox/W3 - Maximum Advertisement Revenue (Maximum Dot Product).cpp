#include <iostream>
#include<algorithm>
using namespace std;

long long int maxRevenue(long long int n, long long int prices[], long long int clicks[])
{
    long long int revenue = 0;

    sort(clicks, clicks + n);
    sort(prices, prices + n);

    for (int i = 0; i < n; i++)
    {
        revenue += (prices[i] * clicks[i]);
    }
    return revenue;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n, prices[1005], clicks[1005];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> clicks[i];
    }

    cout << maxRevenue(n, prices, clicks) << endl;

    return 0;
}
