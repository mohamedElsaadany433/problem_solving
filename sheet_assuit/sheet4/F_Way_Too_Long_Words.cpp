#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n ;
    cin>>n;
    while(n--)
    {
        string x;
        cin>>x;
        int c=x.size();
        if(c<=10)
        {
            cout<<x<<endl;
        }
        else
            cout<<x[0]<<c-2<<x[c-1]<<endl;
    }

    return 0;
}
