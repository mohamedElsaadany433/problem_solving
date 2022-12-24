

#include <iostream>
using namespace std;
int main()
{
	float n;
	cin >> n;
	
	if (n - (int)n == 0)
		cout << "int " << n<<endl;
	else
		cout << "float " << (int)n<< " " << n - (int)n << endl;

}

