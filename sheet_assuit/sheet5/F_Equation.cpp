#include <iostream>
#include <bits/stdc++.h>

using namespace std;

 long long eq(int x, int n)
 {
   long long s=0;
   for(int i=2;i<=n;i+=2)
   {
       s+=pow(x,i);
   }
   long long s2 = s+pow(x,0)-1;
   return s2;
 }
int main()
{
   int x,n;
   cin>>x>>n;
   cout<<eq(x,n)<<endl;
}
