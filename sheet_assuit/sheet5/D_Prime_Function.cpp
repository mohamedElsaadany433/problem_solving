#include <iostream>
#include <bits/stdc++.h>

using namespace std;

 bool prim(int n)
 {
     int c=0;
     if (n==1) return false ;
     else
     {
       for(int i=2;i<=sqrt(n);i++)
     {
         if(n%i==0) c++;
     }
     if(c==0) return true;
     else return false ;
     }
 }
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x;
    cin>>x;
    if (prim(x)) cout<<"YES"<<endl;
    else         cout<<"NO"<<endl;
    }
}
