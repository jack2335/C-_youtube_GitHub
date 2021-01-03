/*#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Please enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The maxinum is %d.", max);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Please enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    printf("The maxinum is %d.", max);
    return 0;
}*/

/*#include <stdio.h>
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
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
}*/

#include <stdio.h>
int max3(int , int , int);
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
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
}
