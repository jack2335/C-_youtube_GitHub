#include <stdio.h>
/*int main()
{
    return 0;
}*/

/*int main()
{
    int number;
    for (number = 1; number <= 1000; ++number)
    {
        if (number%3 == 2 && number%5 == 3 && number%7 == 2)
        {
            printf("%d ", number);
        }
    }
    printf("\n");
    return 0;
}*/

/*int main()
{
    int count = 0;
    int number;
    for (number = 1000; number >= 1; number--)
    {
        if (number%3 == 2 && number%5 == 3 && number%7 == 2)
        {
            ++count;
            if (count <= 3)
            {
                printf("%d ", number);
            }
        }
    }
    printf("\n");
    return 0;
}*/

int main()
{
    int count = 0;
    int number;
    for (number = 1000; number >= 1 && count < 3; --number)
    {
        if (number%3 == 2 && number%5 == 3 && number%7 == 2)
        {
            ++count;
            if (count <= 3)
            {
                printf("%d ", number);
            }
        }
    }
    printf("\n");
    return 0;
}
