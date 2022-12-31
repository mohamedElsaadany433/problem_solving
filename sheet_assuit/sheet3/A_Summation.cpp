#include <iostream>

using namespace std;

int main()
{
    int x;
    long long sum=0;
    cin>>x;
    long long arr[x];
    for(int i=0; i<x; i++)
    {
     cin>>arr[i];
    }
    for(int j=0; j<x;j++)
    {
        sum +=arr[j];
    }
    if (sum>=0)
    {
        cout<<sum<<endl;
    }
    else
    {
        cout<<sum*-1<<endl;
    }
    return 0;
}
