

#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		int prime = 0;
		for (int j = 2; j <i; j++) {
			if (i%j==0) {
				prime = 1;
				break;
			}
		}
		if (prime == 0)
			cout << i << " "; 
	}
	return 0;
}

