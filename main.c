#include<stdio.h>
#include<math.h>
int main()
{
   int n;
   double I, F, K, P;
    while(printf("\nChoose an option:\n")!=EOF)
{
    printf("1. Convert inches to feet\n");
    printf("2. Convert feet to inches\n");
    printf("3. Convert kilograms to pounds\n");
    printf("4. Convert pounds to kilograms\n");
    printf("Enter your choice (1, 2, 3 or 4): ");
    scanf("%d", &n);

    switch (n)
    {
case 1:
            printf("\nEnter a quantity in inches: ");
            scanf("%lf", &I);
            F = I / 12.0;
            printf("%.2lf inches is equal to %.2lf feet.\n", I, F);
            break;
case 2:
            printf("\nEnter a quantity in feet: ");
            scanf("%lf", &F);
            I = F * 12.0;
            printf("%.2lf feet is equal to %.2lf inches.\n", F, I);
            break;
case 3:
            printf("\nEnter a quantity in kilograms: ");
            scanf("%lf", &K);
            P = K * 2.20462;
            printf("%.2lf kilograms is equal to %.2lf pounds.\n", K, P);
            break;
case 4:
            printf("\nEnter a quantity in pounds: ");
            scanf("%lf", &P);
            K = P / 2.20462;
            printf("%.2lf pounds is equal to %.2lf kilograms.\n", P, K);
            break;
default:
            printf("Invalid choice. Please enter 1, 2, 3 or 4.\n");
            break;
    }
}
    return 0;
}
