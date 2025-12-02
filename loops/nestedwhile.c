#include <stdio.h>

int main()
{
    int i = 0;

    printf("All Tables from 0 to 20\n ");

    while (i <= 20)
    {
        int j = 1;

        printf("Table of %d:\n", i);

        while (j <= 10)
        {
            printf("%d x %d = %d\n", i, j, i * j);
            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}
