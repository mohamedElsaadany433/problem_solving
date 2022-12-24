

#include <iostream>
using namespace std;

int main()
{
	int x, y;
	char c;
	cin >> x >> c >> y;
	switch (c)
	{
	case'+':
		cout << x + y <<"\n";
		break;
	case'-':
		cout << x - y << "\n";
		break;
	case'*':
		cout << x * y << "\n";
		break;
	case'/':
		cout << x / y << "\n";
		break;
	}

}

