#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

string largestConcatenate(int n, int numbers[])
{
	string max_salary = "";
	sort(numbers, numbers + n);
	while (n--)
	{
		max_salary += to_string(numbers[n]);
	}
	return max_salary;
}
bool isBetter(int num, int numbers[])
{
	if(num>=numbers[])
}
int main()
{
	int n, numbers[105];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> numbers[i];
	}
	cout << largestConcatenate(n, numbers) << endl;
}
