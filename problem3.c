#include <stdio.h>
#include <math.h>

int existenceTest(float a, float b, float c)
{

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        return 1;
    }

    printf("Not a valid triangle.\n");
    return 0;
}

int classificationTest(float a, float b, float c)
{

    if ((a == b) && (b == c))
    {
        return 1; // Equilateral
    }
    else if ((a == b) || (a == c) || (b == c))
    {
        return 2; // Isoceles
    }

    return 0; // scalene
}

int angleTest(float a, float b, float c)
{
    a = a*a;
    b = b*b;
    c = c*c;

    float difference = (a + b) - c;
    float epsilon = 0.0000001;

    if (fabs(difference) < epsilon)
        return 1; // Right Triangle
    else if ((difference) > 0)
        return 2; // Acute Triangle
    else 
        return 3; // Obtuse Triangle
}

void sort(float *a, float *b, float *c) // a = x, b = y, c = z in my head
{
    float temp;

    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a > *c)
    {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b > *c)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main()
{
    float a, b, c;

    printf("Enter side a: ");
    scanf("%f", &a);
    printf("Enter side b: ");
    scanf("%f", &b);
    printf("Enter side c: ");
    scanf("%f", &c);

    sort(&a, &b, &c); // a = x, b = y, c = z in my head

    if (existenceTest(a, b, c))
    {
        int typeOfSide = classificationTest(a, b, c);
        if (typeOfSide == 1)
            printf("Equilateral ");
        else if (typeOfSide == 2)
            printf("Isosceles ");
        else
            printf("Scalene ");

        int typeOfAngle = angleTest(a, b, c);
        if (typeOfAngle == 1)
            printf("right triangle.\n");
        else if (typeOfAngle == 2)
            printf("acute triangle.\n");
        else if (typeOfAngle == 3)
            printf("obtuse triangle.\n");
        else
            printf("Unknown Error\n"); // Should probably never excecute
    }

    return 0;
}