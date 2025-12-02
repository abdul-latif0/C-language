#include <stdio.h>

int main() {
    // Questions
    char questions[3][100] = {
        "Which data type stores whole numbers in C?",
        "Which symbol ends a statement in C?",
        "Which header file is required for printf()?"
    };

    // Options
    char options[3][4][50] = {
        {"float", "int", "char", "double"},
        {" . ", " ; ", " , ", " : "},
        {"stdio.h", "stdlib.h", "conio.h", "math.h"}
    };

    // Correct answers (index starts from 1)
    int correctAnswers[3] = {2, 2, 1};

    int score = 0;
    int answer;

    printf("===== QUIZ GAME =====\n\n");

    for(int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, questions[i]);
        printf("1) %s\n2) %s\n3) %s\n4) %s\n",
               options[i][0], options[i][1], options[i][2], options[i][3]);

        printf("Your answer: ");
        scanf("%d", &answer);

        if(answer == correctAnswers[i]) {
            score++;
        }
        printf("\n");
    }

    printf("===== QUIZ FINISHED =====\n");
    printf("Your Total Score: %d out of 3\n", score);

    if(score == 3) {
        printf("Excellent! 🎉\n");
    } else if(score == 2) {
        printf("Good Job! \n");
    } else {
        printf("Better luck next time! \n");
    }

    return 0;
}
