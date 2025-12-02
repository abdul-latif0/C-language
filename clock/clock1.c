#include <stdio.h>
#include <conio.h>    // for _kbhit() and _getch()
#include <windows.h>  // for Sleep() and Beep()

int main()
{
    int h, m, s;
    int paused = 0;

    printf("Enter current time (HH MM SS): ");
    scanf("%d %d %d", &h, &m, &s);

    while (1)
    {
        if (_kbhit()) // check if any key is pressed
        {
            char ch = _getch();
            if (ch == 27)  // ESC key to exit
                break;
            if (ch == 32)  // SPACE key to pause/unpause
                paused = !paused;
        }

        if (!paused)
        {
            system("cls"); // clear screen
            printf("\n\n\t\t%02d : %02d : %02d\n", h, m, s);
            printf("\nPress SPACE to pause/resume, ESC to exit.");

            Beep(750, 100); // beep each second
            Sleep(1000);    // wait 1 second

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
    }

    system("cls");
    printf("\nClock stopped.\n");

    return 0;
}
