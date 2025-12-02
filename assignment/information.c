#include <stdio.h>

int main() {
    char name[50];
    char fatherName[50];
    int age;
    char caste[50];
    char college[100];
    char hobbies[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Enter your father's name: ");
    fgets(fatherName, sizeof(fatherName), stdin);

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar(); // consume newline

    printf("Enter your caste: ");
    fgets(caste, sizeof(caste), stdin);

    printf("Enter your college: ");
    fgets(college, sizeof(college), stdin);

    printf("Enter your hobbies: ");
    fgets(hobbies, sizeof(hobbies), stdin);

    printf("\n----- Your Information -----\n");
    printf("Name       : %s", name);
    printf("Father Name: %s", fatherName);
    printf("Age        : %d\n", age);
    printf("Caste      : %s", caste);
    printf("College    : %s", college);
    printf("Hobbies    : %s", hobbies);

    return 0;
}
