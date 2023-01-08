#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int c[123]={};
    for(int i=0;i<s.size();i++)
    {
          c[s[i]]++;
    }
       for(int i=0;i<123;i++)
    {
            if (c[i]!=0)
        cout<<(char) i << " : "<<c[i]<<endl;
    }
    return 0;
}
