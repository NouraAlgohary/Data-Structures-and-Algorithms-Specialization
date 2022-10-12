#include <iostream>

using namespace std;


long long lastDigitOfSum(long long n)
{
    long long fib[10000], i = 2, comulative[10000];

    fib[0] = 0;
    fib[1] = 1;

    comulative[0] = 0;
    comulative[1] = 1;
    while (!(fib[i - 2] == 0 && fib[i - 1] == 1 && i > 2))
    {
        fib[i] = (fib[i - 1] + fib[i - 2]) % 10;
        comulative[i] = (comulative[i - 1] + fib[i]) % 10;
        i++;
    }
    i -= 2;
    return (((n / i) * comulative[i]) + comulative[n % i]) % 10;
}

int main()
{
    long long n;
    cin >> n;
    cout << lastDigitOfSum(n)<< endl;
}
