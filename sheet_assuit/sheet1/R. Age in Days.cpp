
#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,d;
    cin >> n;
    a = n / 365;
    b = n % 365;
    c = b / 30;
    d = b % 30;

    cout <<a<<" years\n" << c<<" months\n" << d<<" days" << "\n";
}

