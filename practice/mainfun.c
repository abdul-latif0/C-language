#include <stdio.h>
#include <string.h>
int main(){

    // we pre declare varaible because of uncurtain behaviour. by just let them declare, we give a value let 
    // suppose to null according to there value of null.

    int age = 0;
    float gpa = 0.0f;
    double gdp = 0.0;
    char currency = '\0';
    char name[30] = "";

    printf("Enter your age : ");
    scanf("%d\n", age );

    
    printf("Enter your gpa : ");
    scanf("%f\n", gpa );
    
    printf("Enter your country's gdp : ");
    scanf("%lf\n", gdp );
    
    printf("Enter your currency : ");
    scanf(" %c\n", currency );

    printf("Enter your full name : ");
    fgets(name, sizeof(name), stdin);

    return 0;
}