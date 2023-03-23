#include<stdio.h>

int main()
{
    int num, num1;
    printf("\nEnter a number: ");
    scanf("%d", &num);

    printf("\nBefore Conversion: %d\n", num);

    switch (num > 0)
    { 
        case 1: num = -num;
                printf("\nAfter Conversion: %d", num);
                break;
            
        case 0: num = -num;
                printf("\nAfter Conversion: %d", num);
                break;
            
        default: 
            printf("\nAfter Conversion: %d", num);
            break;
    }

    printf("\n\n");
    return 0;
}