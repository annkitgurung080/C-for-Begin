/*  C++ Program to Swap Two Numbers without using third variable  */

#include <iostream>
using namespace std;

int main()
{

    int a,b ;

    cout<<"Enter 1st number : "; cin>>a;
    cout<<"Enter 2nd number : "; cin>>b;

    cout << "Before swapping : " << endl;
    cout << "\ta = " << a << endl;
    cout << "\tb = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping : " << endl;
    cout << "\ta = " << a << endl;
    cout << "\tb = " << b << endl;

return 0;
}