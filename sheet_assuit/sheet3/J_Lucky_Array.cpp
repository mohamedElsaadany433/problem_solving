#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min=1e5 , x=0;
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(min==arr[i])
        {
            x++;
        }
    }
    if(x%2==0) cout<<"Unlucky"<<endl;
    else       cout<<"Lucky"<<endl;

    return 0;
}
