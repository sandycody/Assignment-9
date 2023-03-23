#include<stdio.h>

int main()
{
    int var;
    printf("\nEnter your choice: ");
    scanf("%d", &var);

    switch (var)
    {
        case 1:
            printf("\ngood");
            break;

        case 2:
            printf("\nbetter");
            break;

        case 3:
            printf("\nbest");
            break;    

        default:
            printf("\ninvalid");
    }

    printf("\n\n");
    return 0;
}    