
#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int arr[n];
     int min;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     min=arr[0];
    for (int i=0;i<n;i++)
    {
        if(min>arr[i])
           {
            min = arr[i];
            x=i;
           }

    }
     cout<<min<<" " <<x+1<<endl;
    return 0;
}
