#include <stdio.h>
#include <stdlib.h>

#define Name "Mykola"
#define LastName "Ivanenko"
#define GroupName "GP-13"
#define Faculty "FFF"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"

int main()
{
    //--Оголошення змінних. Цілочисельна. Без знаку.
    unsigned int semestr;
    unsigned int age;
    //--Оголошення змінних. Цілочисельна. Знакова.
    int grade1;
    int grade2;
    int grade3;
    //--Оголошення змінних. Плаваюч. кома.
    double averageGrade;
    float admissionScore;

    //--
    printf("%s %s Enter following data.\n", Name, LastName);

    //--Ініц. змінних
    printf("Enter semestr:");
    scanf("%u", &semestr);
    printf("Enter your admission score: ");
    scanf("%f", &admissionScore);
    printf("Enter grade #1: ");
    scanf("%d", &grade1);
    printf("Enter grade #2:");
    scanf("%d", &grade2);
    printf("Enter grade #3:");
    scanf("%d", &grade3);
    printf("Enter your age: ");
    scanf("%u", &age);

    averageGrade = (double)(grade1 + grade2 + grade3) / 3;

    system("clear");

    printf("%s", University);
    printf("\n%s", Faculty);


    return 0;
}
