#include <stdio.h>
int main()
{
    unsigned int next = 1;
    for (int i = 1; i <= 5; i++)
    {
        next = next * 1103515245 + 12345;
        printf("%u\n", next);
    }
    return 0;
}
