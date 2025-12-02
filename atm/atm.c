#include <stdio.h>
int main() {
    int choice;
    float balance = 1000, deposit, withdraw;

    while (1) {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your balance: Rs. %.2f\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");

                scanf("%f", &deposit);
                balance += deposit;
                printf("New balance: Rs. %.2f\n", balance);
                break;
            case 3:
                printf("Enter withdraw amount: ");
                scanf("%f", &withdraw);
                if (withdraw <= balance) {
                    balance -= withdraw;
                    printf("Remaining balance: Rs. %.2f\n", balance);
                } else
                    printf("Insufficient balance!\n");
                break;
            case 4:
                printf("Thank you for using our ATM.\n");
                return 0;
            default:
                printf("Invalid option.\n");
        }
    }
}
