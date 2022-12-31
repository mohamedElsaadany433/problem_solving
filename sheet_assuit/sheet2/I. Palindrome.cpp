


#include <iostream>
using namespace std;

int main()
{
	int n,ntemp,nrev = 0;
	cin >> n;
	ntemp = n;

	while (n)
	{
		nrev = nrev * 10 + n % 10;
		n = n / 10;
	}
	if (nrev==ntemp) {
		cout << nrev << endl << "YES" << endl;
	}
	else
		cout << nrev << endl << "NO" << endl  ;

	
}

