

#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int s = 0; s <n- i;s++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = n; i >0; i--) {
		for (int s = 0; s <n-i;s++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
	
	
}

