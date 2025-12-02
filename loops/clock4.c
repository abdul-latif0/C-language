#include <stdio.h>
#include <windows.h> // for Sleep()

int main()
{
    int h, m, s;

    printf("Enter current time (HH MM SS): ");
    scanf("%d %d %d", &h, &m, &s);

    for (;;) // infinite loop for clock
    {
        system("cls"); // clear screen
        printf("\n\n\t\t%02d : %02d : %02d", h, m, s);

        Sleep(1000); // wait for 1 second
        s++;

        if (s == 60)
        {
            s = 0;
            m++;
        }
        if (m == 60)
        {
            m = 0;
            h++;
        }
        if (h == 24)
        {
            h = 0;
        }
    }

    return 0;
}
