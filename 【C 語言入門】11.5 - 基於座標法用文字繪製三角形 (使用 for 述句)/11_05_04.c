#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    for (i = 1; i <= N; ++i)
    {
        for (j = 1; j <= N; ++j)
        {
            if (i == 1 || j == N || i == j)
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
