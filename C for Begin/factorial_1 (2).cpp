/*  
Factorial of number using function, if else,  while loop  */

#include<iostream>
using namespace std;

void factorial(int);

int main()
{
        int n;
        cout<<"Enter any number : ";
        cin>>n;
        factorial(n);
}

void factorial(int n)
{
        int f=1; // initialize
        int n1=n;

        if(n==0)
        cout<<"\nFactorial of [ " << n1 << "! ] is 1.\n";
        else
        {
                while(n>0)
                {
                        f=f*n; n--;
                }
        }
        cout<<"\nFactorial of [ " << n1 << "! ] is " << f << "\n";
}