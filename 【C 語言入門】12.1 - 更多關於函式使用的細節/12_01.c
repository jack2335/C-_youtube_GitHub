/*#include <stdio.h>
int main()
{
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    printf("%\n", f(4));
    return 0;
}
int f(int x)
{
    return x + 3;
}*/

#include <stdio.h>
int f(int x);

int main()
{
    printf("%d\n", f(4));
    return 0;
}
int f(int x)
{
    return x + 3;
}
