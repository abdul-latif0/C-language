#include <stdio.h>
#include <windows.h>

int main()
{
    int h, m, s;
    for (;;)  //for infinite loop
    {
        for (h = 0; h < 12; h++)
        {
            for (m = 0; m < 60; m++)
            {
                for (s = 0; s < 60; s++)
                {
                    system("cls");
                    printf("Clock:\n");
                    printf("%02d : %02d : %02d\n", h, m, s);
                    Sleep(1000);
                }
            }
        }
    }
    return 0;
}
