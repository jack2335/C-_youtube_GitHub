#include <stdio.h>
int f(int); //函式宣告

int main()
{
    printf("%d\n", f(4)); //函式呼叫
    return 0;
}

int f(int x) //函式定義
{
    return x + 3;
}
