#include <stdio.h>
int main()
{
    int max;
    printf("MAX = ");
    scanf("%d", &max);

    int answer = 0;
    int number;
    for (number = 1; number <= max; ++number)
    {
        if (number%3 == 2 && number%5 == 3 && number%7 == 2)
        {
            answer = number;
        }
    }
    if (answer != 0)
    {
        printf("%d\n", answer);
    }
    return 0;
}
