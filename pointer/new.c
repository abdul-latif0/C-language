#include <stdio.h>
int main()
{
    int number = 0, power = 0;
    int result = 1;
    printf("Enter a number and its power: ");
    scanf("%d %d", &number, &power);

    for (int i = 0; i < power; i++)
    {
        result *= number; 
    }
    printf("%d^%d=%d",number, power, result);
    return 0;
}