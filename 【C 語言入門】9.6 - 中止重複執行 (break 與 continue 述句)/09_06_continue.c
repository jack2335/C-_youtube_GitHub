#include <stdio.h>
int main()
{
    int number;
    for (number = 1; number <= 10; ++number)
    {
        if (number == 5)
        {
            continue;
        }
    printf("%d\n", number);
    }
return 0;
}
