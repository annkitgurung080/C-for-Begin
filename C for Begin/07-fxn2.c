# include<stdio.h>

// user defined function
void add()
{
int a=100, b=200;
printf("The sum of a+b = %d", a+b);
}
void sub()
{
int a=100, b=200;
printf("The difference of a and b = %d", b-a);
}

int main()
{
add();
printf("\n");
sub();
return 0;
}