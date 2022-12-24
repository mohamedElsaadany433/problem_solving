

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
       cin >> a >> b >> c;
    /*
    a<=b<=c
    a<=b>=c
    b<=a<=c
    b<=a>=c
    c<=a>=b
    c<=a<=b
    */
     


       if (a<=b && a <=c) { 
           cout << a << endl; 
           if (b <= c) {
               cout << b << endl;
               cout << c << endl;
           }
           else {

               cout <<c << endl;
               cout << b << endl;

           }
            
       }   // a is smaller 
       else if (b <= a && b <= c) { 
       
           cout << b << endl; 
           if (a <= c)
               cout << a << endl << c << endl;
           else
               cout << c << endl << a << endl;

       } //b is smaller 

       else if (c<=b&&c<=a) {
           cout << c << endl;
           if(a<=b)
               cout << a << endl << b << endl;
           else
               cout << b << endl << a << endl;

       }  // c is smaller

       cout <<endl;
       cout <<a<<endl<<b<<endl<<c<< endl;

}

