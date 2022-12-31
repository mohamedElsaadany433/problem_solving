

#include <iostream>
using namespace std;

int main()
{
	int counter;
	cin >> counter;
		while (counter--) {
			int n;
			cin >> n;
			if (n == 0)
				cout << 0 << " ";
			else {
			while (n) {
				cout << n % 10 << " ";
				n = n / 10;

			}
			
		}
			cout << endl;
	}
}
