/*#include <stdio.h>
int main()
{
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    printf("*");
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int j;
    for (j = 1; j <= N; ++j)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int j;
    for (j = 1; j <= N; ++j)
    {
        printf("*");
    }
    printf("\n");

    printf("*");
    for (j = 1; j <= N-2; ++j) //N=3�ɥ��T�A�YN=5�|�֦L��C�A���ӭ���N-2��
    {
        printf(" ");
    }
    printf("*\n");

    for (j = 1; j <= N; ++j)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}*/

#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i,j;
    for (j = 1; j <= N; ++j)
    {
        printf("*");
    }
    printf("\n");

    for (i = 1; i <= N-2; ++i)
    {
        printf("*");
        for (j = 1; j <= N-2; ++j)
        {
            printf(" ");
        }
        printf("*\n");
    }

    for (j = 1; j <= N; ++j)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}
