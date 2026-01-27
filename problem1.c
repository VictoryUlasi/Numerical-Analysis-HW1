#include <stdio.h>
#include <math.h>

int compute(float a, float b, float c, float *root1, float *root2)
{

    float discriminant = (pow(b, 2) - 4 * (a) * (c));

    if (discriminant < 0)
    {
        printf("No real roots (discriminant < 0).\n");
        return 1;
    }
    else if (discriminant == 0)
    {
        *root1 = ((-b + sqrt(discriminant)) / (2 * a));
        printf("One real root: x = %.6f\n", *root1);
        return 2;
    }

    *root1 = ((-b + sqrt(discriminant)) / (2 * a));
    *root2 = ((-b - sqrt(discriminant)) / (2 * a));

    return 0;
}

int main()
{

    float a, b, c, root1, root2;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    if (!compute(a, b, c, &root1, &root2))
    {
        printf("Two real roots:\n");
        printf("x1 = %.6f\nx2 = %.6f\n", root1, root2);
    }

    return 0;
}