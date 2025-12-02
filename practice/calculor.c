#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 0;
    char opperator = '/0';

    printf("Enter two numbers:");
    scanf("%d %d", num1, num2);

    printf("+ = Addition\n");
    printf("-= Subtraction\n");
    printf("* = Multiplication\n");
    printf("/ = divide\n");

    printf("enter opperator: ");
    scanf("%c", &opperator);

    switch (opperator)
    {
    case '+':
        printf("addition of num1 and num2: %c", opperator);
        break;

    case '-':
        printf("addition of num1 and num2: ");
        break;

    case '*':
        printf("addition of num1 and num2: ");
        break;

    case '/':
        printf("addition of num1 and num2: ");
        break;
    default:
        break;
    }

    return 0;
}