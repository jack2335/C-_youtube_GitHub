#include <stdio.h>
/*int main()
{
    int number;
    printf("MAX = ");
    scanf("%d", &number);
    printf("%d", number);
    return 0;
}*/

/*
int main()
{
    int number;
    printf("MAX = ");
    scanf("%d", &number);
    int answer;
    for (answer = 1; answer <=number; answer++)
    {
        printf("%d ", answer);
    }
    return 0;
}
*/

int main()
{
    int number;
    printf("MAX = ");
    scanf("%d", &number);
    int answer;
    for (answer = 1; answer <=number; answer++)
    {
        if (answer%3 == 2 && answer%5 == 3 && answer%7 == 2)
        {
            printf("%d ", answer);
        }
    }
    return 0;
}

