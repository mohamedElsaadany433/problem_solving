#include <iostream>
#include <bits/stdc++.h>>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0; i<n;i++)
    {
      for(int j=1; j<n;j++)
      {
          if(arr[j]<arr[j-1])
            swap(arr[j],arr[j-1]);
      }
    }
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
