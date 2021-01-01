#include <stdio.h>
/*int main()
{
    return 0;
}*/

/*int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    return 0;
}*/

/*int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int j;
    for (j = 1; j <= N; ++j) //先做一列
    {
    printf("*");
    }
    printf("\n");
    return 0;
}*/

/*int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int j;
    for (j = 1; j <= N; ++j) //先做一列
    {
    printf("*");
    }
    printf("\n");
    for (j = 1; j <= N; ++j) //先做一列
    {
    printf("*");
    }
    printf("\n");
    for (j = 1; j <= N; ++j) //先做一列
    {
    printf("*");
    }
    printf("\n");
    return 0;
}*/

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
        printf("*");
        }
    printf("\n");
    }
    return 0;
}

