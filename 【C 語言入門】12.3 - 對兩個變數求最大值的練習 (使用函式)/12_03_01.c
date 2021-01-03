#include <stdio.h>
int max2(int, int);

int main()
{
    printf("Max(3, 5) = %d\n", max2(3, 5));
    printf("Max(5, 3) = %d\n", max2(5, 3));
    printf("Max(4, 4) = %d\n", max2(4, 4));
    printf("Max(4, 2) = %d\n", max2(4, 2));
    printf("Max(2, 4) = %d\n", max2(2, 4));
    return 0;
}

int max2(int a, int b) //呼叫函式才會將a,b值複製進來
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
