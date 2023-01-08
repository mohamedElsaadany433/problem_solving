#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        string n;
        cin>>n;
        int x=n.find("010");
        int y=n.find("101");
       if (x!=string ::npos ||y!=string ::npos) cout<<"Good"<<endl;
       else cout <<"Bad"<<endl;
    }
    return 0;
}
