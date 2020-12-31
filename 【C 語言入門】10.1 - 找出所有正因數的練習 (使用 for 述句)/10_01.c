#include <stdio.h>
int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);
    int num;
    for (num = 1; num <= N; num++)
    {
        if (N % num == 0 )
        {
            printf("%d ", num);
        }
    }
    return 0;
}
