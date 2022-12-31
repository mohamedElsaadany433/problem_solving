#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   long long arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
    long long  x;
    cin>>x;
    for(int i=0;i<n;i++)
   {
       if(x==arr[i])
       {
           cout<<i<<endl;
             return 0;
       }

   }
    for(int i=0;i<n;i++)
   {
       if(x!=arr[i])
       {
           cout<<-1<<endl;
             return 0;
       }
   }
}
