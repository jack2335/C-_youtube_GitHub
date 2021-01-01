/*#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= ?; ++i) //?為上限，此例相加為30即上限
    {
        for (j = 1; j <= ?; ++j)
        {
            printf("%d, %d\n", i, j);
        }
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 30; ++i)
    {
        for (j = 1; j <= 30; ++j)
        {
            if (i+j == 30 && i*j == 221)
            {
                printf("%d, %d\n", i, j);
            }
        }
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 30/2; ++i) //效率較好
    {
        for (j = 30/2; j <= 30; ++j)
        {
            if (i+j == 30 && i*j == 221)
            {
                printf("%d, %d\n", i, j);
            }
        }
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 30/2; ++i)
    {
        int j = 30 - i;
        if (i*j == 221)
        {
            printf("%d, %d\n", i, j);
        }
    }
    return 0;
}
