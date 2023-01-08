#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
     cin>>n>>m;
     int  arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int x ,y;
     for(int i=0;i<m;i++)
     {
         cin>>x>>y;
           int sum=0;
     for(int j=x-1;j<y;j++)
     {
         sum +=arr[j];
     }
     cout<<sum<<endl;
     }
    return 0;
}
