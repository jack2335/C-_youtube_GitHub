/*void f(viod); //�ŧi

int main()
{
    f();
    return 0;
}

void (void) //�I�sf�禡
{
    f(); //�b�禡�w�q�̩I�s��ҩw�q���禡
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

