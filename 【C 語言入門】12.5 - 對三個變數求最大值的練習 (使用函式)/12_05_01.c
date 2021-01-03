/*#include <stdio.h>
int max2(int , int);
int max3(int , int , int);
int main()
{
    int a, b, c;
    printf("Please enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("The maxinum is %d.", max3(a, b, c));
    return 0;
}

int max3(int a, int b, int c)
{
    //怎麼用max2函式得到max3的結果
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
}*/

#include <stdio.h>
int max2(int , int);
int max3(int , int , int);

int main()
{
    int a, b, c;
    printf("Please enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("The maxinum is %d.", max3(a, b, c));
    return 0;
}

int max3(int a, int b, int c)
{
    //怎麼用max2函式得到max3的結果
    return max2(max2(a, b), c);
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
