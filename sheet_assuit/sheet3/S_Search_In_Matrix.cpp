#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int arr[x][y];
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cin>>arr[i][j];
        }
    }
    int s,f=0;
    cin>>s;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
           if(arr[i][j]==s)
           {
              f=1;
           break;
           }
        }
    }
    if (f==1) {cout<<"will not take number"<<endl;}
    else      {cout<<"will take number"<<endl;}

    return 0;
}
