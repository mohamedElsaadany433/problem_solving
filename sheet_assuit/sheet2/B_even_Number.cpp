#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int t=1 ; t <= n ; t++)
	{
		if (t % 2 == 0)
		{
			cout << t << endl;
			
		}
		 if (n == 1)
		{
			cout << "-1"  << endl;
		}
	}

}