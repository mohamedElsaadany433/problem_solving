

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n1;
	cin >> n1;
	int even = 0, odd = 0, pos = 0, neg = 0;
	for (int i = 1; i <= n1; i++) {
		int n2;
		cin >> n2;
		if (n2%2==0) {
			even++;
		}
		else {
			odd++;
		}
		if (n2 > 0)
		{
			pos++;
		}
		else if (n2<0) {
			neg++;

		}
	}

	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl;
	cout << "Positive: " << pos << endl;
	cout << "Negative: " << neg << endl;

}



