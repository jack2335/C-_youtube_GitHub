/*#include <stdio.h>
int main()
{
    int a, b, max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);
    printf("The maxinum is %d.\n", max);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int a, b, max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);
    if (a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    printf("The maxinum is %d.\n", max);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int a, b, max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);

    printf("The maxinum is %d.\n", max);
    return 0;
}

{
    if (a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
}*/

/*#include <stdio.h>
int main()
{
    int a, b, max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);

    printf("The maxinum is %d.\n", max);
    return 0;
}

{
    int a, b, max; //���ŧi���禡�����ܼƫ��A
    if (a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
}*/

/*#include <stdio.h>
int main()
{
    int a, b, max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);

    printf("The maxinum is %d.\n", max);
    return 0;
}

int max2() //�w�q�禡�W��max2 �^�ǭȫ��A��int �禡���ѼƧ��٨S��
{
    int a, b, max;
    if (a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max; //�^�ǭȬ�max
}*/

/*#include <stdio.h>
int main()
{
    int a, b, max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);

    printf("The maxinum is %d.\n", max);
    return 0;
}

int max2(int a, int b) //�]�w�禡���ѼƤΫ��A
{                       //���禡��2�Ӿ�� �^��1�Ӿ��
    int max;
    if (a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}*/

/*#include <stdio.h>
int main()
{
    int a, b, max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);

    printf("The maxinum is %d.\n", max2(a, b)); //�C�L�禡�^�ǭ�
    return 0;
}

int max2(int a, int b)
{
    int max;
    if (a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}*/

/*#include <stdio.h>
int max2(int, int); //�ŧi�禡

int main()
{
    int a, b, max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);

    printf("The maxinum is %d.\n", max2(a, b)); //�C�L�禡�^�ǭ�
    return 0;
}

int max2(int a, int b)
{
    int max;
    if (a >= b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    return max;
}*/

#include <stdio.h>
int max2(int, int); //�ŧi�禡

int main()
{
    int a, b, max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);

    printf("The maxinum is %d.\n", max2(a, b)); //�C�L�禡�^�ǭ�
    return 0;
}

int max2(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
