#include<stdio.h>

struct emp {
int eid;
float salary;
};

int main()
{
struct emp e1;
struct emp e2;
e1.eid=1;
e1.salary=50000.00;

e2.eid=2;
e2.salary=150000.00;

printf("Emp ID.: %d\n",e2.eid);
printf("Salary. %f\n",e2.salary);
return 0;
}