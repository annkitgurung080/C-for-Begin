# include<stdio.h>
int main()
{
int salary=100000,bonus;
//int size = 4 Byte
if(salary!=100000)
{
//if true
bonus=salary*5/100;
printf("The Bonus is: %d",bonus);
}
else
{
//if false
printf("No Bonus");
}
    return 0;
}