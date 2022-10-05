#include <iostream>
using namespace std;

int elementWise(int n, int arr[])
{
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] * arr[j] > mx) mx = arr[i] * arr[j];
        }
    }
    return mx;
}
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
   // cout << "element pairwise product = " << elementWise(n, arr) << endl;
    //cout << "two numbers product = " << firstTwo(n, arr) << endl;
    cout<< firstTwo(n, arr) << endl;
    
}
