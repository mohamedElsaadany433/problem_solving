#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
        {
             for(int j=i;j<n;j++)
             {
                 int max=-1e5;
                 for(int k=i;k<=j;k++)
                 {
                     if(arr[k]>max)
                        max=arr[k];
                 }
                 cout<<max<<" ";
             }
        }
        cout<<endl;
 }
    return 0;
}
