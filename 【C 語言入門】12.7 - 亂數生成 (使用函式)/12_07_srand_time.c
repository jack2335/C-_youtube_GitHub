/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(2); //��T�w�Ʀr���s���X���üƤ��@��

    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", rand()); //�C���I�srand�禡�N�|�^�Ǥ@���H�����ͪ��ü�
    }                           //���s����禡���X���üƳ��@��
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); //time(0)�^�Ǿ����srand���s���X���ü�

    int i;
    for (i = 1; i <= 5; i++)
    {
        printf("%d\n", rand());
    }
    return 0;
}
