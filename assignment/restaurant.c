#include <stdio.h>

int main()
{
    int choice;
    float total = 0, tax, grandTotal;

    printf("===== WELCOME TO FOOD PLAZA =====\n");
    printf("1. Breakfast Deals\n");
    printf("2. Lunch Deals\n");
    printf("3. Dinner Deals\n");
    printf("4. Midnight Deals\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\n--- Breakfast Menu ---\n");
        printf("1. Paratha & Tea - Rs. 150\n");
        printf("2. Omelette & Bread - Rs. 200\n");
        printf("3. Halwa Puri - Rs. 250\n");
        printf("Enter your order (1-3): ");
        scanf("%d", &choice);
        if (choice == 1)
            total = 150;
        else if (choice == 2)
            total = 200;
        else if (choice == 3)
            total = 250;
        else
            printf("Invalid choice!\n");
        break;

    case 2:
        printf("\n--- Lunch Menu ---\n");
        printf("1. Biryani - Rs. 300\n");
        printf("2. Chicken Karahi - Rs. 500\n");
        printf("3. Burger & Fries - Rs. 400\n");
        printf("Enter your order (1-3): ");
        scanf("%d", &choice);
        if (choice == 1)
            total = 300;
        else if (choice == 2)
            total = 500;
        else if (choice == 3)
            total = 400;
        else
            printf("Invalid choice!\n");
        break;

    case 3:
        printf("\n--- Dinner Menu ---\n");
        printf("1. Mutton Karahi - Rs. 800\n");
        printf("2. BBQ Platter - Rs. 1000\n");
        printf("3. Pulao - Rs. 600\n");
        printf("Enter your order (1-3): ");
        scanf("%d", &choice);
        if (choice == 1)
            total = 800;
        else if (choice == 2)
            total = 1000;
        else if (choice == 3)
            total = 600;
        else
            printf("Invalid choice!\n");
        break;

    case 4:
        printf("\n--- Midnight Deals ---\n");
        printf("1. Zinger Burger - Rs. 350\n");
        printf("2. Sandwich - Rs. 300\n");
        printf("3. Pizza - Rs. 1000\n");
        printf("Enter your order (1-3): ");
        scanf("%d", &choice);
        if (choice == 1)
            total = 350;
        else if (choice == 2)
            total = 300;
        else if (choice == 3)
            total = 1000;
        else
            printf("Invalid choice!\n");
        break;

    default:
        printf("Invalid main choice!\n");
        return 0;
    }

    tax = total * 0.15; // 15% tax
    grandTotal = total + tax;

    printf("\n===== INVOICE =====\n");
    printf("Food Cost: Rs. %.2f\n", total);
    printf("15%% Tax: Rs. %.2f\n", tax);
    printf("-------------------------\n");
    printf("Total Amount: Rs. %.2f\n", grandTotal);
    printf("Thank you! Visit again!\n");

    return 0;
}
