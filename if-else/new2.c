#include <stdio.h>
int main()
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number >= 0)
    {
        printf("You entered a positive number : %d.\n", number);
    }
    else
    {
        printf("you entered a negative number : %d.\n", number);
    }
    return 0;
}