

#include <iostream>
using namespace std;

int main()
{
	int n1, n2;
	cin >> n1 >> n2;
	if (n1 > n2)
		swap(n1, n2);
		for (int i = n1; i >= 1;i--) {
			if (n1%i==0 && n2%i==0) {
				cout << i << endl;
				break;

			}

		}
}
