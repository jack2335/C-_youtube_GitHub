#include <stdio.h>
//=== i=1
int i = 1; //全域變數

int main()
{
    printf("%d", i); //往前看 全域1
    //==== i=2
    int i = 2;
    printf("%d", i); //之前有兩個i 全域及前一大括號 選近的 2
    {
        printf("%d", i); //之前有兩個i 全域及前一大括號 選近的 2
        //===== i=3
        int i = 3;
        printf("%d", i); //之前有三個i 全域及前一大括號 選近的 3
        //=====
    }
    printf("%d", i); //只看到全域及第一個大括號 選近的 2
    return 0;
    //====
}
//===
