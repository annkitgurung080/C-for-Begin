#include<iostream>
using namespace std;
// Comment
int main()
{
float mark;
cout<<"Enter your mark: "; cin>>mark;

    if(mark>100 || mark<=0)
        {cout<<"Invalid Marks.";}
    else if(mark>=80)
        { cout<<"\nDistinction!!!";   }
    else if (mark>=60)
        { cout<<"\n1st Division!!!"; }
    else if (mark>=50)
        {  cout<<"\n2nd Division";  }
        else if (mark>=40)
     {  cout<<"\n3rd Division";  }
    else
        { cout<<"I am sorry! You're Failed."; }
return 0;
}