/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    printf("*\n"); //�L1�ӬP�P+����
    printf("**\n"); //�L2�ӬP�P+����
    printf("* *\n"); //�L1�ӬP�P+1�Ӫť�+1�ӬP�P+����
    printf("*  *\n"); //�L1�ӬP�P+2�Ӫť�+1�ӬP�P+����
    printf("*****\n"); //�L5�ӬP�P+����

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    printf("*\n");     //�L1�ӬP�P                +����
    printf("**\n");    //�L2�ӬP�P                +����
    printf("* *\n");   //�L1�ӬP�P+1�Ӫť�+1�ӬP�P+����
    printf("*  *\n");  //�L1�ӬP�P+2�Ӫť�+1�ӬP�P+����
    printf("*****\n"); //�L5�ӬP�P+����

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    printf("*\n");     //�L1�ӬP�P                +����
    printf("**\n");    //�L1�ӬP�P+0�Ӫť�+1�ӬP�P+����
    printf("* *\n");   //�L1�ӬP�P+1�Ӫť�+1�ӬP�P+����
    printf("*  *\n");  //�L1�ӬP�P+2�Ӫť�+1�ӬP�P+����
    printf("*****\n"); //�L5�ӬP�P+����

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    printf("*\n");     //�L1�ӬP�P                +����
    printf("**\n");    //�L1�ӬP�P+i�Ӫť�+1�ӬP�P+���� i=0
    printf("* *\n");   //�L1�ӬP�P+i�Ӫť�+1�ӬP�P+���� i=1
    printf("*  *\n");  //�L1�ӬP�P+i�Ӫť�+1�ӬP�P+���� i=2
    printf("*****\n"); //�L5�ӬP�P+����

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    printf("*\n");     //�L1�ӬP�P                +����

    printf("*");             //�L1�ӬP�P
    for (j = 1; j <= i; ++j) //�Li�Ӫť�
    {
        printf(" ");
    }
    printf("*\n");           //�L1�ӬP�P+����

    printf("*****\n"); //�L5�ӬP�P+����

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    printf("*\n");     //�L1�ӬP�P                +����

    for (i = 0; i <= 2; ++i)
    {
        printf("*");             //�L1�ӬP�P
        for (j = 1; j <= i; ++j) //�Li�Ӫť�
        {
            printf(" ");
        }
        printf("*\n");           //�L1�ӬP�P+����
    }

    printf("*****\n"); //�L5�ӬP�P+����

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    printf("*\n");     //�L1�ӬP�P                +����

    for (i = 0; i <= N-3; ++i) //N-3�N���1 2�γ̫�@�C
    {
        printf("*");             //�L1�ӬP�P
        for (j = 1; j <= i; ++j) //�Li�Ӫť�
        {
            printf(" ");
        }
        printf("*\n");           //�L1�ӬP�P+����
    }

    printf("*****\n"); //�L5�ӬP�P+����

    return 0;
}*/

#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    printf("*\n");     //�L1�ӬP�P                +����

    for (i = 0; i <= N-3; ++i) //N-3�N���1 2�γ̫�@�C
    {
        printf("*");             //�L1�ӬP�P
        for (j = 1; j <= i; ++j) //�Li�Ӫť�
        {
            printf(" ");
        }
        printf("*\n");           //�L1�ӬP�P+����
    }

    for (j = 1; j <= N; ++j)
    {
        printf("*"); //�LN�ӬP�P
    }
    printf("\n"); //����

    return 0;
}
