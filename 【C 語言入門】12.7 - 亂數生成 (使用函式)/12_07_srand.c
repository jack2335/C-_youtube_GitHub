#include <stdio.h>
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
}
