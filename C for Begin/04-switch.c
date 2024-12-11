#include<stdio.h>
int main()
{
        int c;
    printf("Please enter any number between 1 to 5");
    scanf("%d", &c);
    
        switch(c)
        {
            case 1:
            {
              printf("Yes it is 1."); 
              break; 
            }
            case 2:
            {
              printf("Yes it is 2."); 
              break; 
            }
            default:
            printf("No such option."); 


        }// end of switch

    return 0;
} //this is end of main function