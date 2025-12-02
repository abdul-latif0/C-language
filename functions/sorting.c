#include <stdio.h>
#include <string.h>

void before_sorting(int numbers[], int numbers_size)
{
     printf("Before sorting\n ");
    for (int i = 0; i < numbers_size; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}
void sorting(int numbers[], int numbers_size)
{
    for (int i = 0; i < numbers_size ; i++)
    {
        for (int j = 0; j < numbers_size -i - 1 ; j++)
        {
            if (numbers[j] > numbers[j +1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
            
        }
        
    }
    
}
void print_numbers(int numbers[], int numbers_size)
{
    printf("After sorting\n");;
    for (int i = 0; i < numbers_size; i++)
    {
        printf("%d ", numbers[i]);
    }
    
}
int main()
{
    int numbers[] = {6, 5, 8, 9, 0, 1, 3, 4, 2, 7};
    int numbers_size = sizeof(numbers) / sizeof(numbers[0]);
    
    before_sorting(numbers, numbers_size);
    sorting(numbers, numbers_size);  
    print_numbers(numbers, numbers_size); 
    return 0;
}