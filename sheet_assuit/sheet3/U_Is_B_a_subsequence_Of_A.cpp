#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int arr[x];
    for(int i=0; i<x; i++)
    {
        cin>>arr[i];
    }
    int j=0,c=0;
    for(int i=0; i<y; i++)
    {
        int n;
        cin>>n;
        for( ; j<x; j++)
        {
            if(n==arr[j])
            {
                c++;
                j++;
                break;
            }
        }
    }
    if (c==y)
        cout <<"YES"<<endl;
    else
        cout <<"NO"<<endl;
    return 0;
}
