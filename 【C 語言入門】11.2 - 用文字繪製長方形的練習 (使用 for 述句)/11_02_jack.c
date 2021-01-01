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
    printf("*");
    return 0;
}*/

/*int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    int count;
    for (count = 1; count <= N; count++)
    {
        printf("*");
    }
    return 0;
}*/

int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    int col, row;
    for (row = 1; row <= N; row++)
    {
        for (col = 1; col <= N; col++)
        {
        printf("*");
        }
    printf("\n");
    }
    return 0;
}

