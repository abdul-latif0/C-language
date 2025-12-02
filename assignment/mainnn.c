#include <stdio.h>
int main() {
    float father_income, brother_income, your_income;
    float rent, electricity, food, transport, other;
    float total_income, total_expenses, profit_loss, percentage;

    printf("Enter your father's income :");
    scanf("%f", &father_income);

    printf("Enter your brother's income :");
    scanf("%f", &brother_income);

    printf("Enter your your's income :");
    scanf("%f", &your_income);
    
    printf("Enter your monthly house rent :");
    scanf("%f", &rent);

    printf("Enter your monthly electricity bill :");
    scanf("%f", &electricity);

    printf("Enter your monthly food cost :");
    scanf("%f", &food);

    printf("Enter your monthly transport cost :");
    scanf("%f", &transport);

    printf("Enter your monthly other expenses :");
    scanf("%f", &other);

    total_expenses = rent + electricity + food + transport + other;
    total_income = father_income + brother_income + your_income;
    profit_loss = total_income - total_expenses;
    percentage = (profit_loss/total_income) * 100;

    printf("Total Income : %d\n", total_income);
    printf("Total Expenses : %d\n", total_expenses);
    printf(" Income left : %.2f\n",profit_loss );
    printf("Percentage : %d\n", percentage);

    return 0;
}