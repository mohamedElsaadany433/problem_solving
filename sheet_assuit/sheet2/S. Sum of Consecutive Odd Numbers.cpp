
#include <iostream>

using namespace std;

int main()
{
	int counter;
	cin >> counter;
	while (counter--) {
		int n1, n2;
		cin >> n1 >> n2;
		if (n1 > n2)
			swap(n1, n2);
		int sum = 0;
		for (int i = n1+1;i < n2;i++) {
			if (i % 2 != 0) {
				sum += i;
			}		
		}
		cout << sum << endl;
	}
	
}

