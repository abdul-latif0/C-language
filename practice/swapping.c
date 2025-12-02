#include <stdio.h>
int main (){
    int a = 10, b = 20, c = 30;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n\n\n", c);


    a = b;
    b = c;
    c = a;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}