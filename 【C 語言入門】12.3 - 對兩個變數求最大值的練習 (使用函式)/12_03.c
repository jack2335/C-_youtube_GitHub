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
    int a, b, max; //先宣告此函式內的變數型態
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

int max2() //定義函式名稱max2 回傳值型態為int 函式的參數均還沒給
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
    return max; //回傳值為max
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

int max2(int a, int b) //設定函式的參數及型態
{                       //此函式給2個整數 回傳1個整數
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

    printf("The maxinum is %d.\n", max2(a, b)); //列印函式回傳值
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
int max2(int, int); //宣告函式

int main()
{
    int a, b, max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);

    printf("The maxinum is %d.\n", max2(a, b)); //列印函式回傳值
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
int max2(int, int); //宣告函式

int main()
{
    int a, b, max;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);

    printf("The maxinum is %d.\n", max2(a, b)); //列印函式回傳值
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
