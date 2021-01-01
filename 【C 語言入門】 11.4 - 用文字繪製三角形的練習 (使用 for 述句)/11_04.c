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
    printf("*\n"); //1琍琍+传︽
    printf("**\n"); //2琍琍+传︽
    printf("***\n"); //3琍琍+传︽

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    //N=3
    printf("*\n"); //i琍琍+传︽ i=1
    printf("**\n"); //i琍琍+传︽ i=2
    printf("***\n"); //i琍琍+传︽ i=3

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
        for (j = 1; j <= i; ++j) //i琍琍
        {
            printf("*");
        }
        printf("\n"); //传︽
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
        for (j = 1; j <= i; ++j) //i琍琍
        {
            printf("*");
        }
        printf("\n"); //传︽
    }
    return 0;
}
