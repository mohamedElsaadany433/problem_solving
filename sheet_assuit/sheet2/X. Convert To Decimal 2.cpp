#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  while(n--)
  {
      long long x=1;
    int p=0;
      cin >>x;
      long long l=0;
      while(x)
      {
         int y;
         y=x%2;
         x=x/2;
         if (y==1)
         {
             l+=pow(2,p);
             p++;
         }
      }
       cout<<l<<endl;
  }
    return 0;
}
