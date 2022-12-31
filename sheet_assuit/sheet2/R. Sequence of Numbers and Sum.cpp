

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int n1=1, n2=1;
	
	while (n1>0 && n2>0) {
		int sum = 0;
		cin >> n1 >> n2;
		if (n1 >= n2) { swap(n1, n2); }
		for (int i = n1; i <= n2; i++) {
			if (i <= 0) return 0;
			if (i > 0)  sum += i;
			cout << i <<" ";
		
		}
		cout << "sum =" << sum<<endl;
	}
	
}

