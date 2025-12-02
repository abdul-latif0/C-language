#include <stdio.h>

int main()
{
    float income1, income2, income3;
    float rent, electricity, food, others;
    float total_income, total_expenses, netresult, percentage;

    printf("Enter your family income no 1 : ");
    scanf("%f", &income1);

    printf("Enter your family income no 2 : ");
    scanf("%f", &income2);

    printf("Enter your family income no 3 : ");
    scanf("%f", &income3);

    printf("Enter your home rent : ");
    scanf("%f", &rent);

    printf("Enter your electricity bill : ");
    scanf("%f", &electricity);

    printf("Enter your food expense : ");
    scanf("%f", &food);

    printf("Enter your other expenses (like travel, stationary for uni): ");
    scanf("%f", &others);

    total_income = income1 + income2 + income3;
    total_expenses = rent + electricity + food + others;
    netresult = total_income - total_expenses;
    percentage = (netresult / total_income) * 100;

    printf("\n----- Family Finance Report -----\n");
    printf("Total Income   : %.2f\n", total_income);
    printf("Total Expenses : %.2f\n", total_expenses);
    printf("Net Result     : %.2f\n", netresult);
    printf("Percentage     : %.2f%%\n", percentage);

    if (netresult > 0)
        printf("Profit = %.2f\n", netresult);
    else if (netresult < 0)
        printf("Loss = %.2f\n", -netresult);
    else
        printf("No Profit or Loss\n");

    return 0;
}
