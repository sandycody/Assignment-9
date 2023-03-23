#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a, b, c;
    char ch;

    while (1)
    {
        printf("\n\nMENU DRIVEN PROGRAMME TO VERIFY THE TRIANGLE LIES IN WHICH CATEGORY:\n");
        printf("\na. ISOSCELES TRIANGLE");
        printf("\nb. RIGHT ANGLED TRIANGLE");
        printf("\nc. EQUILATERAL TRIANGLE");
        printf("\nd. EXIT\n");

        printf("\nEnter your choice: ");
        fflush(stdin);
        scanf("%c", &ch);

        switch (ch)
        {
        case 'a':
            printf("\nEnter the first number: ");
            scanf("%d", &a);
            printf("\nEnter the second number: ");
            scanf("%d", &b);
            printf("\nEnter the third number: ");
            scanf("%d", &c);

            if (a == b || b == c || c == a)
                printf("\n%d, %d and %d are the lengths of an isosceles triangle", a, b, c);

            else
                printf("\n%d, %d and %d are not the lengths of an isosceles triangle", a, b, c);

            break;

        case 'b':
            printf("\nEnter the first number: ");
            scanf("%d", &a);
            printf("\nEnter the second number: ");
            scanf("%d", &b);
            printf("\nEnter the third number: ");
            scanf("%d", &c);

            if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
                printf("\n%d, %d and %d are the lengths of a right angled triangle", a, b, c);

            else
                printf("\n%d, %d and %d are not the lengths of a right angled triangle", a, b, c);

            break;

        case 'c':
            printf("\nEnter the first number: ");
            scanf("%d", &a);
            printf("\nEnter the second number: ");
            scanf("%d", &b);
            printf("\nEnter the third number: ");
            scanf("%d", &c);

            if (a == b && b == c && c == a)
                printf("\n%d, %d and %d are the lengths of an equilateral triangle", a, b, c);

            else
                printf("\n%d, %d and %d are not the lengths of an equilateral triangle", a, b, c);

            break;

        case 'd':
            printf("\nThank you for using the programme.\n\n");
            exit(0);
        }
    }

    return 0;
}