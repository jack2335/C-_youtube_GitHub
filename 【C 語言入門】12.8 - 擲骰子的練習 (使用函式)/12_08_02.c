/*#include <stdio.h>
int main()
{
    int answer = 4;
    int guess;
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    printf("Too large!\n");
    printf("Too small!\n");
    printf("Corect!\n");
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int answer = 4;
    int guess;
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    if (guess > answer)
    {
        printf("Too large!\n");
    }
    else
    {
        if (guess < answer)
        {
            printf("Too small!\n");
        }
        else
        {
            printf("Corect!\n");
        }
    }
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); //�C�������ק����H�����X
    int answer = rand() % 2; //�ۦ�ק�l�� %2�l�ƥu��0�M1 ����ץu��2��
    int guess;
    printf("Please enter your guess: ");
    scanf("%d", &guess);
    if (guess > answer)
    {
        printf("Too large!\n");
    }
    else
    {
        if (guess < answer)
        {
            printf("Too small!\n");
        }
        else
        {
            printf("Corect!\n");
        }
    }
    return 0;
}
