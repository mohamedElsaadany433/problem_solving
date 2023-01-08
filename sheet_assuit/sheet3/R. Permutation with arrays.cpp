#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n],y[n];
    for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
    for(int j=0;j<n;j++)
    {
         cin>>y[j];
    }
     sort(x,x+n);
     sort(y,y+n);
       for(int i=0;i<n;i++)
       {
           if (x[i]==y[i]);
           else
           {
               cout<<"no"<<endl;
               return 0;
           }
       }
       cout<<"yes"<<endl;

    return 0;
}
