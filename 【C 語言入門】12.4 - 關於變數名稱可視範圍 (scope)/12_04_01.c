#include <stdio.h>
int i = 5;

int f()
{
    i = i + 1; //往前看 5
    printf("%d\n", i); //印6
    return 0;
}

int main()
{
    printf("%d\n", i); //印5
    int i = 6;
    i = i + 1; //7
    f();
    printf("%d\n", i); //選近的 印7
    return 0;
}
