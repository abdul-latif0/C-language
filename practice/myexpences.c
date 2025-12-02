#include <stdio.h>

int main() {
    int your_income;
    int rent;
    int food;
    int transport;
    int other_expences;
    int monthly_cost;
    int remaining;

    printf("Enter your income :");
    scanf("%d", &your_income);

    printf("Enter your room rent :");
    scanf("%d", &rent);

    printf("Enter monthly food cost :");
    scanf("%d", &food);

    printf("Enter your transport expences :");
    scanf("%d", &transport);

    printf("Enter your some other/extra expences :");
    scanf("%d", &other_expences);

    monthly_cost = rent+food+transport+other_expences;
    remaining =your_income-monthly_cost;

    printf("\nyour monthly cost = %d\n", monthly_cost);
    printf("your monthly remaining amount = %d\n", remaining);

    return 0;
}