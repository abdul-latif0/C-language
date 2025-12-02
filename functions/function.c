#include <stdio.h>
void main1(char name[],int age);


int main()
{
    char name[] = "abdul latif";
    int age = 19;

    main1(name,age);
    main1(name,age);
    main1(name,age);

    return 0;
}
void main1(char name[],int age)
{
    
    printf("happy brithday to you");
    printf("\nhappy brithday to you");
    printf("\nhappy brithday dear %s", name);
    printf("\nhappy brithday to you");
    printf("\nYour are now %d years old\n",age);
    printf("\n");
}