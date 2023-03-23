#include<stdio.h>

int main()
{
    int year;
    printf("\nEnter a year: ");
    scanf("%d", &year);

    switch (year % 100 == 0)
    {
        case 1: switch (year % 400 == 0)
            {
                case 1: printf("\n%d is a leap year", year);
                        break;

                case 0: printf("\n%d is not a leap year", year);
                        break;
            }
            break;

        case 0: switch (year % 4 == 0)    
            {
                case 1: printf("\n%d is a leap year", year);
                        break;

                case 0: printf("\n%d is not a leap year", year);
                        break;
            }
            break;
    }
    printf("\n\n");
    return 0;
}