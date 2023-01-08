#include <iostream>

using namespace std;

 int sum(int x,int y);
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<sum(n,m)<<endl;
}
  int sum(int x,int y)
  {
      int sumation=x+y;
      return sumation;
  }
