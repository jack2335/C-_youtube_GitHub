/*
int j;
for (j = 1; j<=9; ++j)
{
    printf("2 * %d = %d\n", j, 2*j);
}
*/

/*
int j;
for (j = 1; j<=9; ++j)
{
    printf("2 * %d = %d\n", j, 2*j);
}
for (j = 1; j<=9; ++j)
{
    printf("3 * %d = %d\n", j, 3*j);
}
*/
/*
int j;
for (j = 1; j<=9; ++j)
{
    printf("%d * %d = %d\n", i, j, i*j); //i = 2
}
for (j = 1; j<=9; ++j)
{
    printf("%d * %d = %d\n", i, j, i*j); //i = 3
}
*/
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 2; i<=9; ++i)
        {
        for (j = 1; j<=9; ++j)
            {
            printf("%d * %d = %d\n", i, j, i*j); //i = 2, 3..
            }
        }
    return 0;
}
