#include <stdio.h>
//=== i=1
int i = 1; //�����ܼ�

int main()
{
    printf("%d", i); //���e�� ����1
    //==== i=2
    int i = 2;
    printf("%d", i); //���e�����i ����Ϋe�@�j�A�� ��� 2
    {
        printf("%d", i); //���e�����i ����Ϋe�@�j�A�� ��� 2
        //===== i=3
        int i = 3;
        printf("%d", i); //���e���T��i ����Ϋe�@�j�A�� ��� 3
        //=====
    }
    printf("%d", i); //�u�ݨ����βĤ@�Ӥj�A�� ��� 2
    return 0;
    //====
}
//===
