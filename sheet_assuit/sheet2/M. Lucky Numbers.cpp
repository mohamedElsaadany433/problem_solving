

#include <iostream>
using namespace std;

int main()
{
	int n1, n2, z = 0;
	cin >> n1 >> n2;
	for (int i = n1; i <= n2;i++) {
		int lucy = 0, x = i;
		while (x) {
			if (x % 10 != 4 && x % 10 != 7)
				lucy++;
			x = x / 10;
		}
		if (lucy == 0) {
			cout << i << " ";
			z++;
		}	
	}
	if (z == 0)
		cout << -1 << endl;
	return 0;
}
