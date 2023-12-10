#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;

	int m, n;
	bool isPrime;
	while (T--)
	{
		cin >> m >> n;
		for (int i = m; i <= n; i++)
		{
			isPrime = true;
			for (int j = 2; j <= sqrt(i); j++)
			{
				if (i % j == 0)
				{
					isPrime = false;
					break;
				}
			}
			if (isPrime && i != 1)
			{
				cout << i << '\n';
			}
		}
		cout << '\n';
	}
	return 0;
}
