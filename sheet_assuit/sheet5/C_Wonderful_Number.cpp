#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool even(int n)
{
    if (n%2==0) return true;
    else return false ;
}
bool binary (int n)
{
    string s1,s2;
int mod;
while(n)
{
    mod=n%2;
    n=n/2;
    if(mod==0) s1+="0";
    else s1+="1";
}
 s2=s1;
 reverse(s2.begin(),s2.end());
 if (s1==s2)   return true ;
 else          return false ;
}

int main()
{
 int x;
 cin>>x;
 if(even(x)) cout<<"NO";
 else
 {
     if (binary(x)) cout<<"YES";
     else cout<<"NO";
 }
}
