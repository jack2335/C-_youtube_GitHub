/*#include <stdio.h>
int main()
{
    return 0;
}*/

/*#include <stdio.h> //�ڪ��g�k
int main()
{
    int N;
    scanf("%d", &N);
    float answer;
    answer = (float)N / 2;
    printf("N / 2 = %f", answer);
    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    printf("%f\n", div2(N)); //�I�s�禡div2
    return 0;
}*/

/*#include <stdio.h>
double div2(double x)
{
    return x / 2;
}

int main()
{
    int N;
    scanf("%d", &N);
    printf("%f\n", div2(N)); //�I�s�禡div2 ��JN
    return 0;
}*/

#include <stdio.h>
double div2(double);

int main()
{
    int N;
    scanf("%d", &N);
    printf("%f\n", div2(N)); //�I�s�禡div2 ��JN
    return 0;
}

double div2(double x)
{
    return x / 2;
}
