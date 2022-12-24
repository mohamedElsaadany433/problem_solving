

#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;  
    long long  num = b*log(a); 
    long long  num2 = d*log(c); 
    if (num > num2) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
       
}


