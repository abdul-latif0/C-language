#include <stdio.h>
#include <windows.h>  // for Sleep() and system("cls")

int main()
{
    int h = 0, m = 0, s = 0;

    // Input starting time
    printf("Enter current time (HH MM SS): ");
    scanf("%d %d %d", &h, &m, &s);

    while (1)
    {
        system("cls"); // clear screen
        printf("\n\n\t\t%02d : %02d : %02d", h, m, s); // show clock

        Sleep(1000); // wait for 1 second
        s++;         // increase second

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
