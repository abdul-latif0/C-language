#include <stdio.h>
int main() {
    int number = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if  (number%2 == 0) {
        printf("%d is an even integer.",number);
    }
    else {
        printf("%d is an odd integer.",number);
    }

    return 0;
}