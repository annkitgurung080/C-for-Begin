/*
Factorial using "for" loop
*/
#include<iostream>
using namespace std;

int main()
{
    int fact=1,number,i;
    
    cout << "Enter number : " << "\n";
    cin>>number;
        for(i=number; i>0; i--){
            fact=fact*i;
            }
        cout<<"Factorial of "<<number<<" is "<<fact<<"\n";
return 0;
}