/*#include <stdio.h>

int count(void) //voidボㄧΑ⊿Τ把计
{
    int k = 0; //–Ω㊣常琌縒ミ
    k++;
    return k;
}

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", count());
    }
    return 0;
}*/

/*#include <stdio.h>

int k = 0; //ㄧΑ﹚竡ぇ﹚竡跑计

int count(void)
{
    k++; //–Ω㊣常办跑计
    return k;
}

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", count());
    }
    return 0;
}*/

#include <stdio.h>

int count(void)
{
    static int k = 0; //繰篈static跋办跑计穦Τ 穦﹍てΩ
    k++;
    return k; //ΤcountㄧΑ穦ノ
}

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", count());
    }
    return 0;
}

