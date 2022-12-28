#include <iostream>
#include<queue>
using namespace std;

int Refills(int d, int m, queue<int> stop, int location)
{
	int last_stop = location;

	if ((location + m) >= d) return 0;

	if (stop.empty() || (stop.front() - location) > m) return -10000000;

	while (!stop.empty() && (stop.front() - location) <= m)
	{
		last_stop = stop.front();
		stop.pop();
	}
	//cout << last_stop << endl;
	return 1 + Refills(d, m, stop, last_stop);
}

int main()
{
	queue <int>stop;
	int d, m, n, s, res = 0;
	cin >> d >> m >> n;
	while (n--)
	{
		cin >> s;
		stop.push(s);
	}
	res = Refills(d, m, stop, 0);
	if (res < 0)
		cout << -1 << endl;
	else
		cout << res << endl;
	return 0;
}
