/*#include <stdio.h>
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
            if () //座標位於右下區塊
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
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    for (i = 1; i <= N; ++i)
    {
        for (j = 1; j <= N; ++j)
        {
            if (i+j >= N+1) //=N+1是右上左下 >N+1是右下區塊
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
