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
    unsigned int a = 1000; //�p�G�O�L�����
    unsigned int b = a * a * a; //�L����ƪ����줣�O ���w�q�欰
    unsigned int c = a * a * a * a;
    printf("%u\n", b);
    printf("%u\n", c); //1000000000000 % (UINT_MAX+1) �l��0~UINT_MAX
    printf("%u\n", UINT_MAX);
    return 0;
}
