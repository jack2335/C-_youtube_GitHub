/*#include <stdio.h>
int main()
{
    int a = 1000;
    int b = a * a * a;
    int c = a * a * a * a;
    printf("%d\n", b);
    printf("%d\n", c);
    return 0;
}*/

#include <stdio.h>
#include <limits.h>

int main()
{
    unsigned int a = 1000; //如果是無號整數
    unsigned int b = a * a * a; //無號整數的溢位不是 未定義行為
    unsigned int c = a * a * a * a;
    printf("%u\n", b);
    printf("%u\n", c); //1000000000000 % (UINT_MAX+1) 餘數0~UINT_MAX
    printf("%u\n", UINT_MAX);
    return 0;
}
