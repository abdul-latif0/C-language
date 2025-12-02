#include <stdio.h>
int main()
{
    int ages[] = {17, 19, 23, 14, 12, 13, 49, 38};
    int lenght_ages = sizeof(ages) / sizeof(ages[0]);
    int lower_age = {0};
    int assending_ages[] = {0}; 

    for (int i = 0; i < lenght_ages; i++)
    {
        if (ages[i] < ages[0])
        {
            lower_age = ages [i];
        }
        
    }
    printf("%d", lower_age);

    return 0;
}