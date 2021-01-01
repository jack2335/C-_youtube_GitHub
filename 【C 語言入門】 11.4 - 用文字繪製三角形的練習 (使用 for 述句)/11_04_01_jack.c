#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int col, row;
    for (col = 1; col <= N; col++)
    {
        for (row = 1; row <= col; row++)
        {

            printf("*");
        }
    printf("\n");
    }

    return 0;
}
