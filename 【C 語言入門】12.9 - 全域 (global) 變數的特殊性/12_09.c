#include <stdio.h>
int i = 0;

void f()
{
    i++;
}
int main()
{
    f();
    printf("%d\n", i); //1
    return 0;
}

