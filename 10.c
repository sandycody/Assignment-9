#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float D, x1, x2, imaginary; 
    printf("\nEnter the value of a: ");
    scanf("%d", &a);
    printf("\nEnter the value of b: ");
    scanf("%d", &b);
    printf("\nEnter the value of c: ");
    scanf("%d", &c);

    D = b*b - 4*a*c;

    switch (D > 0)
    {
        case 1: x1 = (-b + sqrt(D)) / (2*a);
                x2 = (-b - sqrt(D)) / (2*a);

                printf("\nThe roots are real and distinct: %.3f , %.3f", x1, x2);
                break;
            
        case 0: switch (D < 0)
                {
                    case 1: D = 4*a*c - b*b;
                            x1 = x2 = (-b / 2*a);
                            imaginary = sqrt(D) / (2*a);
                            
                            printf("\nThe roots are imaginary and conjugate of each other: %.3f + (%.3f)i , %.3f - (%.3f)i", x1, imaginary, x2, imaginary);
                            break;

                    case 0: x1 = x2 = -b / (2*a);        
                                   
                            printf("\nThe roots are real and equal: %.3f , %.3f", x1, x2);
                            break;
                }   
                break;
    }  

    printf("\n\n");
    return 0;
}  