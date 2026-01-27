#include <stdio.h>

void getLetterGrade(int grade, char letterGrade[])
{

    if (grade >= 90)
        letterGrade[0] = 'A';
    else if (grade >= 80)
        letterGrade[0] = 'B';
    else if (grade >= 70)
        letterGrade[0] = 'C';
    else if (grade >= 60)
        letterGrade[0] = 'D';
    else if (grade < 60)
        letterGrade[0] = 'F';
}

void getInclusive(int grade, char letterGrade[])
{
    if (((grade % 10) >= 5) || (grade == 100))
    {
        letterGrade[1] = '+';
    }
    else
    {
        letterGrade[1] = '-';
    }
}
int main()
{

    int grade = 0;
    char letterGrade[2];

    printf("Enter a numeric integer grade (0-100): ");
    scanf("%d", &grade);

    getLetterGrade(grade, letterGrade);
    getInclusive(grade, letterGrade);

    if (letterGrade[0] == 'F')
        printf("%c\n", letterGrade[0]);
    else
        printf("Grade: %c%c\n", letterGrade[0], letterGrade[1]);
}