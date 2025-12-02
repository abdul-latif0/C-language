#include <stdio.h>
int main() {
    float father_income, brother_income, your_income;
    float rent, electricity, food, other;

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

    printf("Enter your monthly other expenses :");
    scanf("%f", &other);

    float monthly_expenses= rent+electricity+food+other;
    float total_income = father_income+brother_income+your_income;
    float income_left = total_income-monthly_expenses;
    

    printf("\n Income left : %.2f\n", income_left);

    return 0;
}