#include <stdio.h>
int i = 5;

int f()
{
    i = i + 1; //���e�� 5
    printf("%d\n", i); //�L6
    return 0;
}

int main()
{
    printf("%d\n", i); //�L5
    int i = 6;
    i = i + 1; //7
    f();
    printf("%d\n", i); //��� �L7
    return 0;
}
