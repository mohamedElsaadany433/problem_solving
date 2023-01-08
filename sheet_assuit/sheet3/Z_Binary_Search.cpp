#include <iostream>
#include <bits/stdc++.h>

using namespace std;

 int bs (int arr[],int l,int r,int s)
 {
     while(l<=s)
     {
         int mid =l+(r-l)/2;
         if(arr[mid]==s)
         {
             return mid;
         }
         else if (arr[mid]<s)
         {
             l=mid+1;
         }
         else
         {
             l=mid-1;
         }
     }
     return -1;
 }
    int main()
 {
     int n,m;
     cin>>n>>m;
     int arr[n];
     for (int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     sort(arr,arr+n);
     while (m--)
     {
        int x;
        cin>>x;
        int result= bs(arr,0,n-1,x);
        if (result == -1) {cout<<"not fount"<<endl;}
        else  {cout<<"found"<<endl;}
     }
    return 0;
 }
