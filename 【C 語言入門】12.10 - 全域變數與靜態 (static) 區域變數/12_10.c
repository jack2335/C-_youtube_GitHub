/*#include <stdio.h>

int count(void) //void��ܨ禡�S���Ѽ�
{
    int k = 0; //�C���I�s���O�W�ߪ��@��
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

int k = 0; //�b�禡�w�q���~�ŧi�w�q�ܼ�

int count(void)
{
    k++; //�C���I�s���s���P�@�ӥ����ܼ�
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
    static int k = 0; //�R�Astatic���ϰ��ܼƥu�|���@�� �u�|��l�Ƥ@��
    k++;
    return k; //�u��count�禡�|�Ψ�
}

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", count());
    }
    return 0;
}

