#include<stdio.h>

int main()
{
    float units, amount = 0, total = 0;
    printf("\nEnter the units of electricity: ");
    scanf("%f", &units);

    switch (units <= 50)
    {
        case 1: amount = units * 0.50;
                break;

        case 0: switch (units <= 150)
                {
                    case 1: amount = 25 + (units - 50) * 0.75;
                            break;

                    case 0: switch (units <= 250)
                            {
                                case 1: amount = 100 + (units - 150) * 1.20;
                                        break;

                                case 0: amount = 220 + (units - 250) * 1.50;
                                        break;        
                            }   
                            break;     
                }
                break;        
    }
    total = amount + amount * 0.20;
    printf("\nTotal amount of electricity bill is: %.3f", total);

    printf("\n\n");
    return 0;
}