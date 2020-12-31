#include <stdio.h>
/*int main()
{
    int min, max;
    printf("MIN = ");
    scanf("%d", &min);
    printf("MAX = ");
    scanf("%d", &max);
    return 0;
}*/

/*int main()
{
    int min, max;
    printf("MIN = ");
    scanf("%d", &min);
    printf("MAX = ");
    scanf("%d", &max);
    int answer;
    for (answer = min; answer <= max; answer++)
    {
        printf("%d ", answer);
    }
    return 0;
}*/

int main()
{
    int min, max;
    printf("MIN = ");
    scanf("%d", &min);
    printf("MAX = ");
    scanf("%d", &max);
    int answer;
    for (answer = min; answer <= max; answer++)
    {
        if (answer%3 == 2 && answer%5 == 3 && answer%7 == 2)
        {
            printf("%d ", answer);
        }
    }
    return 0;
}
