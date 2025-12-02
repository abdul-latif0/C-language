#include <stdio.h>

int main()
{
    // declaring variable
    int a, b, c;

    printf("Enter a Value for A: ");
    scanf("%d", &a);

    printf("Enter a Value for B: ");
    scanf("%d", &b);

    c = a + b;

    printf("\nAddition of A and B = %d", c);

    return 0;
}