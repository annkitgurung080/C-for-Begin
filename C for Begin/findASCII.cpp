/*  C++ Program to Display ASCII Value of a Character  */

#include <iostream>
using namespace std;

int main()
{
     char c;

     cout << "Enter any Character :- ";
     cin >> c;

     cout << "The ASCII Value of Character "<< c << " is : " << int(c)<<"\n";

     return 0;
}