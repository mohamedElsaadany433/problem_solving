#include <iostream>
#include <bits/stdc++.h>

using namespace std;
 string c(int n, char a)
{
    string res ;
 for(int i=1;i<=n;i++)
     {
       res =res+ a+" ";
     }
     return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        char a;
        cin>>n>>a;
         cout<<c(n,a)<<endl;
    }
}
