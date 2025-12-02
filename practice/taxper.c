#include <stdio.h>

int main()
{
    float income;
    float taxper, tax;

    printf("Enter your salary : ");
    scanf("%f", &income);

    printf("Enter Percentage of Tax: ");
    scanf("%f", &taxper);

    tax = income * taxper / 100;

    printf("\nTax amount payable = %.2f", tax);

    return 0;
}