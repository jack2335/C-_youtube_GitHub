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
    srand(time(0)); //每次的答案均為隨機產出
    int answer = rand() % 2; //自行修改餘數 %2餘數只有0和1 限制答案只有2個
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
