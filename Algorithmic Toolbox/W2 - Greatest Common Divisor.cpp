#include <iostream>
using namespace std;

int gcd(long long a, long long b)
{
    int c = 0;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int main()
{
    long long a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}
