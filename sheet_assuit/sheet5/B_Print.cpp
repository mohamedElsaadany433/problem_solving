#include <iostream>

using namespace std;

 void print (int n);
int main()
{
 int x;
 cin>>x;
  print(x);
}
  void print (int n)
  {
      for(int i=1;i<n;i++)
      {
        cout<<i<<" ";
      }
      cout<<n;
  }
