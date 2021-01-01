/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    printf("*\n"); //1琍琍+传︽
    printf("**\n"); //2琍琍+传︽
    printf("* *\n"); //1琍琍+1フ+1琍琍+传︽
    printf("*  *\n"); //1琍琍+2フ+1琍琍+传︽
    printf("*****\n"); //5琍琍+传︽

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    printf("*\n");     //1琍琍                +传︽
    printf("**\n");    //2琍琍                +传︽
    printf("* *\n");   //1琍琍+1フ+1琍琍+传︽
    printf("*  *\n");  //1琍琍+2フ+1琍琍+传︽
    printf("*****\n"); //5琍琍+传︽

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    printf("*\n");     //1琍琍                +传︽
    printf("**\n");    //1琍琍+0フ+1琍琍+传︽
    printf("* *\n");   //1琍琍+1フ+1琍琍+传︽
    printf("*  *\n");  //1琍琍+2フ+1琍琍+传︽
    printf("*****\n"); //5琍琍+传︽

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    printf("*\n");     //1琍琍                +传︽
    printf("**\n");    //1琍琍+iフ+1琍琍+传︽ i=0
    printf("* *\n");   //1琍琍+iフ+1琍琍+传︽ i=1
    printf("*  *\n");  //1琍琍+iフ+1琍琍+传︽ i=2
    printf("*****\n"); //5琍琍+传︽

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    printf("*\n");     //1琍琍                +传︽

    printf("*");             //1琍琍
    for (j = 1; j <= i; ++j) //iフ
    {
        printf(" ");
    }
    printf("*\n");           //1琍琍+传︽

    printf("*****\n"); //5琍琍+传︽

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    printf("*\n");     //1琍琍                +传︽

    for (i = 0; i <= 2; ++i)
    {
        printf("*");             //1琍琍
        for (j = 1; j <= i; ++j) //iフ
        {
            printf(" ");
        }
        printf("*\n");           //1琍琍+传︽
    }

    printf("*****\n"); //5琍琍+传︽

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    printf("*\n");     //1琍琍                +传︽

    for (i = 0; i <= N-3; ++i) //N-3材1 2の程
    {
        printf("*");             //1琍琍
        for (j = 1; j <= i; ++j) //iフ
        {
            printf(" ");
        }
        printf("*\n");           //1琍琍+传︽
    }

    printf("*****\n"); //5琍琍+传︽

    return 0;
}*/

#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    printf("*\n");     //1琍琍                +传︽

    for (i = 0; i <= N-3; ++i) //N-3材1 2の程
    {
        printf("*");             //1琍琍
        for (j = 1; j <= i; ++j) //iフ
        {
            printf(" ");
        }
        printf("*\n");           //1琍琍+传︽
    }

    for (j = 1; j <= N; ++j)
    {
        printf("*"); //N琍琍
    }
    printf("\n"); //传︽

    return 0;
}
