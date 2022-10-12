#include <iostream>

using namespace std;

long long FibModm(long long n,int m)
{
    long long i = 2, period[10000];;
    period[0] = 0;
    period[1] = 1;
    while(!(period[i - 1] == 1 && period[i - 2] == 0 && i > 2))
    {
        period[i] = (period[i-1] + period[i-2]) % m;
        i++;
    }
    i -= 2;
    
    return period[n % i];
}
int main()
{
    long long n;
    int m;
    cin >> n >> m;
    cout << FibModm(n, m) << endl;
}

