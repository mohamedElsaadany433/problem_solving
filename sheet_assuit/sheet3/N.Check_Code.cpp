#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    if(s[a]!='-' )
    {
        cout <<"No"<<endl;
        return 0;
    }
    if(s[a]=='-' )
    {
        for(int i=0; i<s.size(); i++)
        {
            if(i==a);
            else if (s[i]>='0' && s[i]<='9');
            else
            {
                cout <<"No"<<endl;
                return 0;
            }
        }
        cout <<"Yes"<<endl;
    }

    return 0;
}
