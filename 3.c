#include<stdio.h>

int main()
{
    int num;
    printf("\nEnter a day number of a week: ");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
            printf("\nHello dear, today is Monday.");
            break;
        
        case 2:
            printf("\nHello dear, today is Tuesday.");
            break;
        
        case 3:
            printf("\nHello dear, today is Wednesday.");
            break;
        
        case 4:
            printf("\nHello dear, today is Thursday.");
            break;
        
        case 5:
            printf("\nHello dear, today is Friday.");
            break;
        
        case 6:
            printf("\nHello dear, today is Saturday.");
            break;

        case 7:
            printf("\nHello dear, today is Sunday.");
            break;
        
        default:
            break;
    }   

    printf("\n\n");
    return 0;
}