#include <iostream>
using namespace std;

long long firstTwo(int n, int arr[])
{
    long long first = 0, second = 0;
    int idx = 0;

        for (int i=0; i < n; i++)
        {
            if (arr[i] > first) 
            {
                first = arr[i]; idx = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > second && idx!=i)
            {
                second = arr[i];
            }
        }
    return first * second;
}
int main()
{
    int n, arr[200000];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout<< firstTwo(n, arr) << endl;
}
