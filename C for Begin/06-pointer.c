#include<stdio.h>
int main()
{

int var1=100;
// to print value stored in var1
printf("%d",var1); // output 100

// to print ADDRESS OF var1
printf("\n %p", &var1); // output 100000000bb70fff99c

// %p --> address format specifier

int* ptr = &var1;

printf("\n %p", ptr);

printf("\n %d",*ptr);
// & = address of

    return 0;
}