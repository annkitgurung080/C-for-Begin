# include<stdio.h>
int add(int a);

int main()
{
    int result=add(10);
    printf("%d",result);
    return 0;
}

// below is the User Defined Function
int add(int a)
{
    if (a > 0)
    {
    return a + add(a-1);
    }
    else{
        return 0;
    }
}