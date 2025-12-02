#include <stdio.h>

int main()
{
    char questions[3][50] = 
    {
        "Which data type stores whole numbers in C?",
        "Which symbol ends a statement in C?",
        "Which header file is required for printf()?"
    };

    char choice[3][4][10] = 
    {
        {"float", "int", "char", "double"},
        {" . ", " ; ", " , ", " : "},
        {"stdio.h", "stdlib.h", "conio.h", "math.h"}
    };

    char answers[3] = {'B','B','A'};
    char result = 0;
    int score = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("%d. %s\n", i + 1, questions[i]);
        printf("A.%s\nB.%s\nC.%s\nD.%s\n", choice[i][0], choice[i][1], choice[i][2], choice[i][3]);
        
        printf("Enter your choice: ");
        scanf(" %c", &result);

        if (result == answers[i])
        {
            score++;
        }

        printf("\n");
    }

    printf("Your score is %d out of %d\n", score, 3);

    return 0;
}
