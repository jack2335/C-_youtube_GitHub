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
        //�Li�ӬP�P
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

for (j = 1; j <= i; ++j) //�۷��print_stars(i)
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

        print_stars(i); //�禡�ت��b����@�q�{���A���O�^�ǭ�

        printf("\n");
    }
    return 0;
}

void print_stars(int i) //void�@���^�ǭȫ��A��,��ܸӨ禡���^�ǥ����
{
    int j;
    for (j = 1; j <= i; ++j)
    {
        printf("*");
    }
    return; //return��褣�[�����ܼơA���Breturn�i�ٲ�
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


