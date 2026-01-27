#include <stdio.h>

double factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    int n;
    double s = 1;
    printf("Enter N: ");
    scanf("%d", &n);

    if (n >= 0)
    {
        for (int i = 1; i <= n; i++)
        {
            s += (1 / factorial(i));
        }
    }

    printf("Series sum S = %.10f\n", s);
    return 0;
}