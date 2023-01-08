#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int f=0,s=1;
    if(n==1)
    {
        cout<<f<<" ";
    }
    else
    {
        cout<<f<<" "<<s<<" ";

        for(int i=2; i<n; i++)
        {
            int x=f+s;
            cout<<x<<" ";
            f=s;
            s=x;
        }
    }

    return 0;
}
