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

    int i;
    for (i = 1; i <= N; ++i)
    {
        //印i個星星
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    for (i = 1; i <= N; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    for (i = 1; i <= N; ++i)
    {

        print_stars(i);

        printf("\n");
    }
    return 0;
}

for (j = 1; j <= i; ++j) //相當於print_stars(i)
{
    printf("*");
}*/

/*#include <stdio.h>

int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    for (i = 1; i <= N; ++i)
    {

        print_stars(i);

        printf("\n");
    }
    return 0;
}

print_stars(int i)
{
    int j;
    for (j = 1; j <= i; ++j)
    {
    printf("*");
    }
}*/

/*#include <stdio.h>
void print_stars(int i);

int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int i, j;
    for (i = 1; i <= N; ++i)
    {

        print_stars(i); //函式目的在執行一段程式，不是回傳值

        printf("\n");
    }
    return 0;
}

void print_stars(int i) //void作為回傳值型態時,表示該函式不回傳任何值
{
    int j;
    for (j = 1; j <= i; ++j)
    {
        printf("*");
    }
    return; //return後方不加任何變數，此處return可省略
}*/

#include <stdio.h>
void print_stars(int i);
void print_triangle(int N);

int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    print_triangle(N);
    return 0;
}

void print_triangle(int N)
{
    int i;
    for (i = 1; i <= N; ++i)
    {
        print_stars(i);
        printf("\n");
    }
}

void print_stars(int i)
{
    int j;
    for (j = 1; j <= i; ++j)
    {
        printf("*");
    }
}


