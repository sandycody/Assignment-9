#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    int a, b;

    while (1)
    {
        printf("\n\n############################################");
        printf("\n\nWELCOME TO THE MENU DRIVEN PROGRAMME\n");
        printf("\na. ADDITION");
        printf("\nb. SUBTRACTION");
        printf("\nc. MULTIPLICATION");
        printf("\nd. DIVISION");
        printf("\ne. EXIT\n");

        printf("\nEnter your choice: ");
        fflush(stdin);
        scanf("%c", &ch);

        switch (ch)
        {
        case 'a':
            printf("\nEnter first number: ");
            scanf("%d", &a);
            printf("\nEnter second number: ");
            scanf("%d", &b);

            printf("\nThe addition of %d and %d is: %d", a, b, a + b);
            break;

        case 'b':
            printf("\nEnter first number: ");
            scanf("%d", &a);
            printf("\nEnter second number: ");
            scanf("%d", &b);

            printf("\nThe subtraction of %d and %d is: %d", a, b, a - b);
            break;

        case 'c':
            printf("\nEnter first number: ");
            scanf("%d", &a);
            printf("\nEnter second number: ");
            scanf("%d", &b);

            printf("\nThe product of %d and %d is: %d", a, b, a * b);
            break;

        case 'd':
            printf("\nEnter first number: ");
            scanf("%d", &a);
            printf("\nEnter second number: ");
            scanf("%d", &b);

            printf("\nThe quotient of %d and %d is: %d", a, b, a / b);
            break;

        case 'e':
            printf("\nThank you so much for using this programme.");
            exit(0);

        default:
            printf("\nSorry! You have entered an invalid choice.");
            break;
        }
    }

    printf("\n\n");
    return 0;
}