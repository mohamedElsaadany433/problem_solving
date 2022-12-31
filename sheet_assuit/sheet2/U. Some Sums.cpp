

#include <iostream>
using namespace std;

int main()
{
	int n, a, b, sum = 0;
	cin >> n >> a >> b  ;
	for (int i = 1; i <= n; i++) 
	{
		int x = i,sum2=0;
		while (x)
		{
			sum2 += x % 10;
			x = x / 10;
		}
		if (sum2 >= a && sum2 <= b) 
			sum += i;

	}
	cout << sum << endl;
	return 0;
}

