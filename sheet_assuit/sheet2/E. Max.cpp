

#include <iostream>
using namespace std;

int main()
{
	int n1;
	cin >> n1;
	int max = 0;
	for (int i = 1; i <= n1;i++) {
		int n2; 
		cin >> n2;
		if (i==1) {
			max = n2;	
		}
		if (n2>max)
		{
			max = n2;
		}
	}
	
	cout << max << endl;
}