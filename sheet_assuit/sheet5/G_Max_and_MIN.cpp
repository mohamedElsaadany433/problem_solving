#include <iostream>
#include <bits/stdc++.h>

using namespace std;

 void sorting (int arr[], int n)
 {
     sort(arr,arr+n);
 }
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for (int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sorting(arr,n);
   cout<<arr[0]<<" "<<arr[n-1];
}
