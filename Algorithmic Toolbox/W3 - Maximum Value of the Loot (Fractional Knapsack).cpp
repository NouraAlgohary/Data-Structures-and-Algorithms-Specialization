#include <iostream>
#include<map>
#include <iomanip>
#include<algorithm>
using namespace std;

struct C_W
{
    int cost, weight;
    long double i_value;
};
bool compare(struct C_W cw1, struct C_W cw2)
{
    return(cw1.i_value > cw2.i_value);
}
long double maxLoot(int W, int n, C_W CW[])
{
    long double value = 0;
    for (int i = 0; i < n; i++)
    {
      //  cout << CW[i].cost << " " << CW[i].weight << endl;
        if (W == 0) break;
        if (CW[i].weight <= W)
        {
            value += CW[i].cost;
            W -= CW[i].weight;
        }
        else
        {
            value += (CW[i].cost) * (double(W) / double(CW[i].weight));
            W = 0;
        }
    }
    return value;
}
int main()
{
    int n, W;
    struct C_W CW[1000];

    cin >> n >> W;
    for (int i = 0; i < n; i++)
    {
        cin >> CW[i].cost >> CW[i].weight;
        CW[i].i_value = CW[i].cost / CW[i].weight;
    }
    sort(CW, CW + n, compare);

    cout << fixed << setprecision(3) << maxLoot(W, n, CW) << endl;

}
