#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", rand()); //每次呼叫rand函式就會回傳一個隨機產生的亂數
    }                           //重新執行函式產出的亂數都一樣
    return 0;
}
