/*#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= ?; ++i) //?���W���A���Ҭۥ[��30�Y�W��
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
    for (i = 1; i <= 30/2; ++i) //�Ĳv���n
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
