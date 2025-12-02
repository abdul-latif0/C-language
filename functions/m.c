#include <stdio.h>

void sorting();

int main()
{
    int ages[5];
    int temp;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter age (%d): ", i + 1);
        scanf("%d", &ages[i]);
    }

    sorting(ages[5], temp);
   

    printf("\nAges in ascending order:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ages[i]);
    }

    return 0;
}

void sorting(int ages[5], int temp)
{
{
     for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (ages[j] > ages[j + 1])
            {
                temp = ages[j];
                ages[j] = ages[j + 1];
                ages[j + 1] = temp;
            }
        }
    }
}
}
