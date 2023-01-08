#include <iostream>

using namespace std;

int main()
{
   int n ,m;
   cin>>n>>m;
   int arr[n],f[m+1]={0};
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
       int x=arr[i];
       f[x]++;
   }
   for(int i=1;i<m+1;i++)
   {
       cout<<f[i]<<endl;
   }
    return 0;
}
