# include <stdio.h>

int main()
{
        int choice,a,b,ad,sub,mul,div,inp;

              a=10; 
              b=20;

              printf("What do you want to do ?");
              printf("\n-------------------------");
              printf("\n1. Addition");
              printf("\n2. Subtraction");
              printf("\n3. Multiplication");
              printf("\n4. Division");
              printf("\n-------------------------");

                    printf("\nEnter your choice: ");
                    scanf("%d", &choice);

                    //int choice=2;
                    
                    if(choice==1)
                    { printf("\n Sum = %d",a+b);}
                    else if (choice==2)
                    { printf("\n Difference = %d",a-b); }
                    else if (choice==3)
                    { printf("\n Product = %d",a*b);  }
                    else if (choice==4)
                    { printf("\n Quotient = %d",a/b); }
                    else
                    { printf("\nThere is no choice."); }  
                        
        return 0;
}