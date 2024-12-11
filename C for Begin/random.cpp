/* 
Program to Generate Random Numbers between 0 and 100  
*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int i;    // for loop counter
    int num;  // to store random number

    cout<<"Generating Random Numbers Below :- \n";
    for(i=1;i<=5;i++)
    {
        num=rand()%100; //get random number
        cout<<" "<<num<<" ";
    }
return 0;
}