#include <stdio.h>

int main() {
    float income1, income2, income3;
    float electricity, groceries, travel, other;
    float income, expense, balance;
    
    printf("Enter amount of your First income: ");
    scanf("%f", &income1);

    printf("Enter amount of your Second income: ");
    
    scanf("%f", &income2);
    
    printf("Enter amount of your Third income: ");
    scanf("%f", &income3);

    printf("Electricity bill: ");
    scanf("%f", &electricity);

    printf("groceries: ");
    scanf("%f", groceries);

    printf("Travel: ");
    scanf(" %f", &travel);
    
    printf("other: ");
    scanf("%f", &other);

    income = income1 + income2 + income3;
    expense = electricity + groceries + travel + other;
    balance = income - expense;

    printf("\nYour Total Income = %.2f\n", income);
    printf("Your Total Expenses = %.2f\n", expense);
    printf("Your Remaining Balance = %.2f\n", balance);

    return 0;
}


