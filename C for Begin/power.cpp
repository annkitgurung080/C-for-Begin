/*
Program to find powers of given number.
Takes input from user and finds power of that number.
*/
#include<iostream>
using namespace std;

int power(int n, int p){

    int pow=1; // initialising 
    int i=1; // for looping purpose
    
    while(i<=p)
        {   
            pow=pow*n;  i++;  
        }
return pow;}

int main(){
    int n,p;
    cout<<"\nEnter number: "; cin>>n;
    cout<<"\nEnter Power: "; cin>>p;
    cout<< n << "^" << p <<" = ";
    cout<<power(n,p);
return 0;}


// 2^5 --> 1X2 x2 x2 x2 x2  = 32