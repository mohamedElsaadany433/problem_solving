#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,x;
    cin>>s;
   for(int i=s.size()-1; i>=0;i--)
   {
       x+=s[i];
   }
       if(s==x)
     cout<<"YES"<<endl;
     else
      cout<<"NO"<<endl;
    return 0;
}
