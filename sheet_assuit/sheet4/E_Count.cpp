#include <iostream>
#include <string>

using namespace std;

int main()
{
    string x;
    cin>>x;
    int n=x.size();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=x[i]-'0';
    }
     cout<<sum<<endl;
    return 0;
}
