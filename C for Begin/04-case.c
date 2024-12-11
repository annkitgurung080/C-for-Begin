#include <stdio.h>

int main() {
  int i,a,b,choice;
  for (i = 0; i < 3; i++)
  {
    printf("\n What do you want to do:");
    printf("\n --------------------------\n");
    printf("\n 1. Addition:");
    printf("\n 2. Subtraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n -------------------------\n");
    printf("\n Enter your choice: \n");
    scanf("%d", &choice); // takes input from the user
        
            printf("\n Enter first number: "); 
            scanf("%d", &a);
            printf("\n Enter second number: "); 
            scanf("%d", &b);

    switch(choice)
    {
        case 1:
            
            printf("Sum = %d", a+b );
            break;
        case 2:
            
                if(a>b){
                printf("Difference = %d", a-b );
                }
                else
                {
                printf("Difference = %d", b-a );
                }
            
            break;
        
        case 3:
            
            printf("Product = %d", a*b );
            break;
        
        case 4:
            
            if(a>b){
                printf("Quotient = %d", a/b );
                }
                else
                {
                printf("Quotient = %d", b/a );  
                }
            break;
        
        default:
            printf("No such option. Please try again.");
    
    } // end of switch
    
  } // end of for loop
  return 0;
} // end of main
