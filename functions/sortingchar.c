#include <stdio.h>

void before_sorting(char grades[], int grades_size)
{
       printf("Before sorting\n ");
    for (int i = 0; i < grades_size; i++)
    {
        printf("%c ", grades[i]);
    }
    printf("\n");
}

void sorting(char grades[], int grades_size)
{
    for (int i = 0; i < grades_size ; i++)
    {
        for (int j = 0; j < grades_size - 1 ; j++)
        {
            if (grades[j] > grades[j +1])
            {
                int temp = grades[j];
                grades[j] = grades[j + 1];
                grades[j + 1] = temp;
            }
            
        }
        
    }
    
}
void print_numbers(char grades[], int grades_size)
{
    printf("After sorting\n");;
    for (int i = 0; i < grades_size; i++)
    {
        printf("%c ", grades[i]);
    }
    
}
int main()
{
    char grades[] = {'D', 'E', 'F', 'B', 'A', 'C'};
    int gardes_size = sizeof(grades) / sizeof(grades[0]);
    
    before_sorting(grades,gardes_size);
    sorting(grades, gardes_size);  
    print_numbers(grades, gardes_size); 
    return 0;
}