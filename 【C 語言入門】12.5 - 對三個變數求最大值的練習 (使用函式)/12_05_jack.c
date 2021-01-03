#include <stdio.h>
int max3(int, int, int);

int main()
{
    int a, b, c;
    printf("Please enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("The maxinum is %d.", max3(a, b, c));
    return 0;
}

int max3(int a, int b, int c)
{
    int max;
    if (a >= b && a >= c)
    {
        max = a;
    }
    if (b > a && b >= c)
    {
        max = b;
    }
    if (c > a && c > b)
    {
        max = c;
    }
    return max;
}
