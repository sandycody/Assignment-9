#include<stdio.h>

int main()
{
    int month;
    printf("\n\nEnter the month number: ");
    scanf("%d", &month);

    switch (month)
    {
        case 1: printf("\nNumber of days = %d", 31); 
                break;
    
        case 2: printf("\nNumber of days = %d", 28); 
                break;
            
        case 3 ... 7: switch (month % 2)
                    {
                        case 1:
                            printf("\nNumber of days = %d", 31);
                            break;

                        case 0:
                            printf("\nNumber of days = %d", 30);
                            break;
                    }    
                    break;
            
        case 8 ... 12: switch (month % 2)
                    {
                        case 0:
                            printf("\nNumber of days = %d", 31);
                            break;

                        case 1:
                            printf("\nNumber of days = %d", 30);
                            break;
                    }    
                    break; 
               
        default:
            printf("\nYou have entered invalid month number.");
            break;
    }

    printf("\n\n");
    return 0;
}