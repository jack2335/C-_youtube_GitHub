/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    for (i =1; i <= N; ++i)
    {
        for (j = 1; j <= N; ++j)
        {
            //每個問號要決定是要印星號或者印空白
            printf("?");
        }
        printf("\n");
    }
    return 0;
}*/

#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    for (i =1; i <= N; ++i)
    {
        for (j = 1; j <= N; ++j)
        {
            //每個問號要決定是要印星號或者印空白
            if (i == 1 || i == N || j == 1 || j == N)
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
}
