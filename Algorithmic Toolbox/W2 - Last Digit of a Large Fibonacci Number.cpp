#include <iostream>

using namespace std;


long long lastDigitOfSum(long long m, long long n)
{
    long long fib[10000], i = 2, comulative[10000];

    fib[0] = 0;
    fib[1] = 1;

    comulative[0] = 0;
    comulative[1] = 1;
    while (!(fib[i - 2] == 0 && fib[i - 1] == 1 && i > 2))
    {
        fib[i] = (fib[i - 1] + fib[i - 2]) % 10;
        comulative[i] = (comulative[i - 1] + fib[i]) % 100;
        i++;
    }
    i -= 2;
    return abs(((n / i) * comulative[i]) + comulative[n % i] - ((m / i) * comulative[i] + comulative[m % i - 1])) % 10;
}

int main()
{
    long long n, m;
    cin >> m >> n;
    cout << lastDigitOfSum(m,n) << endl;
}