
#include <iostream>
using namespace std;\

int main()
{
	int Password =0;
	
	while (true)
	{
		cin >> Password;
		if (Password == 1999) {
			cout << "Correct\n";
			break;
		}
		else
		{
			cout << "Wrong\n";
		}

	}
			
}
