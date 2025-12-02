#include <stdio.h>

int main()
{
    int marks;

    printf("enter marks (0-100) : ");
    scanf("%d ", &marks);

    if (marks < 20 )
    {
        printf("fail\n");
    }
    
    if (marks > 45)
    {
        printf("c grade\n");
    }
    
    if (marks < 70)
    {
        printf("b grade\n");
    }
    
    if (marks <= 100)
    {
        printf("a grade\n");
    }
    
    else 
    {
        printf("wrong marks\n");
    }
    
    return 0;
}