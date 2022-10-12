#include <iostream>
using namespace std;
long long gcd(int a, int b)
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
unsigned long long lcm(long long a, long long b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    //cout << "gcd: " << gcd(a, b) << endl;
    cout << lcm(a, b) << endl;
}

