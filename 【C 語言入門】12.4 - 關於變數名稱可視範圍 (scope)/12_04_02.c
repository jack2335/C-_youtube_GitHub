#include <stdio.h>
int main()
{
    int i = 3;
    printf("%d\n", i); //¦L3
    if (i == 3)
    {
        i = i + 1; //4
        int i = 6;
        printf("%d\n", i); //¦L6
        i = i + 1; //7
    }
    if (i == 3) //4
    {
        printf("%d\n", i);
    }
    return 0;
}
