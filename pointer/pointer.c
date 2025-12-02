#include <stdio.h>

void brithday();

int main()
{
    int age = 19;
    int *Age = &age;

    brithday(age, Age);


    return 0;
}
void brithday(int age, int* Age)
{
    age++;
    printf("you are now %d years old\n", age);
}