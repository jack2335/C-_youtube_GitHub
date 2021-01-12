/*void f(viod); //宣告

int main()
{
    f();
    return 0;
}

void (void) //呼叫f函式
{
    f(); //在函式定義裡呼叫到所定義的函式
}*/

void f(int);

int main()
{
    printf("%d\n", f(0));
    return 0;
}

void f(int i)
{
    return f(i+1);
}

