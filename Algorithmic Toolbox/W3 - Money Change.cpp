

#include <iostream>
using namespace std;
int minChange(int money)
{
    return money / 10 + (money % 10) / 5 + money % 5;
}

int main()
{
    int money;
    cin >> money;
    cout << minChange(money) << endl;
}
