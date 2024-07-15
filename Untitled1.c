#include<stdio.h>
#include<math.h>
int main()
{
   int n;
   double I, F, K, P;
    printf("Choose an option:\n");
    printf("1. Convert inches to feet\n");
    printf("2. Convert feet to inches\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &n);

    switch (n)
    {
case 1:
            printf("Enter a quantity in inches: ");
            scanf("%lf", &I);
            F = I / 12.0;
            printf("%.2lf inches is equal to %.2lf feet.\n", I, F);
            break;
        case 2:
            printf("Enter a quantity in feet: ");
            scanf("%lf", &F);
            I = F * 12.0;
            printf("%.2lf feet is equal to %.2lf inches.\n", F, I);
            break;
        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
            break;
    }
    return 0;
}
