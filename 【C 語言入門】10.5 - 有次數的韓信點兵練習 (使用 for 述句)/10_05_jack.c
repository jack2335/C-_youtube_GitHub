#include <stdio.h>
/*int main()
{
    int number;
    for (number = 1; number <= 1000; number++)
    {
        if (number%3 == 2 && number%5 == 3 && number%7 == 2)
        {
            printf("%d ", number);
        }
    }
    return 0;
}*/

int main()
{
    int number, count = 0;
    for (number = 1; number <= 1000 && count < 3; number++)
    {
        if (number%3 == 2 && number%5 == 3 && number%7 == 2)
        {
            printf("%d ", number);
            count++;
        }
    }
    return 0;
}
