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
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
            {
                cout<<0<<endl;
                return 0;
            }
    }
    int counter =0,end=0;
    while(end==0)
    {
        for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            arr[i]=arr[i]/2;
        }
          else
          {
              end =1;
              break;
          }
    }
     counter++;
    }

    cout<<counter-1<<endl;

    return 0;
}
