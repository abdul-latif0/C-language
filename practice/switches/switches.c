#include <stdio.h>
int main()
{
    int num = 0;

    printf("Enter a number(1 to 7): ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thursday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Saturday");
        break;

    case 7:
        printf("Sunday");
        break;

    default:
        printf("Invaild day");
        break;
    }
    return 0;
}