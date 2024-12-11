#include<stdio.h>

int main()
{

int age;
printf("\n Enter your age:"); 
scanf("%d", &age);

    if (age > 100)
    {
        printf("\n Age is not valid if >= 100.");
    }
    else if (age >= 16 && age < 100)
    {
        printf("yes, you're eligible for vote.");   
    }
    else
    {
    printf("\n You are not eligible for VOTE.");
    }
    return 0;
}