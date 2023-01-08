#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
      string x,y;
      cin>>x>>y;
      int n=max(x.size(),y.size());
      for(int i=0;i<n;i++)
      {
          if (i<x.size()) cout<<x[i];
          if (i<y.size()) cout<<y[i];
      }
      cout <<endl;
    }
    return 0;
}
