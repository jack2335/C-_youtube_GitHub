/*#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; ++i)
    {
        for (j = 1; j <= 5; ++j) //i=1 j=1~5
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; ++i)
    {
        for (j = 1; j <= 5; ++j)
        {
            printf("(%d,%d)", i, j);
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; ++i)
    {
        for (j = 1; j <= 5; ++j)
        {
            if (i == j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; ++i)
    {
        for (j = 1; j <= 5; ++j)
        {
            if (i >= j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 5; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("(%d,%d)", i, j);
        }
        printf("\n");
    }
    return 0;
}
