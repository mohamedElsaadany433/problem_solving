

#include <iostream>
using namespace std;


int main()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		
		for (int j = i+(i-1)*3;j <4*i;j++)
		{
			cout << j << " ";
		}
		cout << "PUM" << endl;
	}
}

