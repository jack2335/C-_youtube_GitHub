#include <stdio.h>
/*int main()
{
    return 0;
}*/

int main()
{
    int m, n, answer;
    for (m = 2; m <= 9; m++)
    {
        for (n = 1; n <= 9; n++)
        {
            answer = m * n;
            printf("%d * %d = %d\n", m, n, answer);
        }
    }
    return 0;
}
