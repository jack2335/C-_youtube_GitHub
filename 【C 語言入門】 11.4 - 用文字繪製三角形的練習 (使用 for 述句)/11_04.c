/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    //N=3
    printf("*\n"); //�L1�ӬP�P+����
    printf("**\n"); //�L2�ӬP�P+����
    printf("***\n"); //�L3�ӬP�P+����

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    //N=3
    printf("*\n"); //�Li�ӬP�P+���� i=1
    printf("**\n"); //�Li�ӬP�P+���� i=2
    printf("***\n"); //�Li�ӬP�P+���� i=3

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    for (i = 1; i <= 3; ++i) //i=1, 2, 3
    {
        for (j = 1; j <= i; ++j) //�Li�ӬP�P
        {
            printf("*");
        }
        printf("\n"); //����
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
        for (j = 1; j <= i; ++j) //�Li�ӬP�P
        {
            printf("*");
        }
        printf("\n"); //����
    }
    return 0;
}
