#include<stdio.h>

int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nBefore Conversion: %d\n", num);

    switch (num % 2)
    { 
        case 1: printf("\nAfter Conversion: %d", num);
                break;
            
        case 0: printf("\nAfter Conversion: %d", ++num);
                break;
    
        case -1: printf("\nAfter Conversion: %d", num);
                break;
    }        

    printf("\n\n");
    return 0;
}