#include <iostream>

using namespace std;

void s (int &x, int &y)
{
    int temp =x;
    x=y ;
    y = temp;
}
int main()
{
    int x,y;
    cin>>x>>y;
    s(x,y);
    cout<<x<<" "<<y;

}
