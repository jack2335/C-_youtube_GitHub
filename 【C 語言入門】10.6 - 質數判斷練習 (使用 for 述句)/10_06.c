#include <stdio.h>
//��ƧP�_�m��
/*int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    return 0;
}*/

/*int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int numberofDivisors = 0;
    int number;
    for (number = 2; number < N; ++number) //number < N�~���j�A�������O
    {
        if (N % number == 0) //N % number == 0�~���j�A�������O
        {
            ++numberofDivisors;
        }
    }
    if (numberofDivisors == 0) ////���2��N�A�䤤���㰣�̬��D���
    {
        printf("Yes\n");
    }
            else
            {
                printf("No\n");
            }
    return 0;
}*/

/*int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int isPrime = 1;
    int number;
    for (number = 2; number < N; ++number) //number < N�~���j�A�������O
    {
        if (N % number == 0) //N % number == 0�~���j�A�������O
        {
            isPrime = 0;
        }
    }
    if (isPrime == 1) ////���2��N�A�䤤���㰣�̬��D���
    {
        printf("Yes\n");
    }
            else
            {
                printf("No\n");
            }
    return 0;
}*/

/*int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int isPrime = 1;
    int number;
    for (number = 2; number < N && isPrime; ++number) //number < N�~���j�A�������O
    {
        if (N % number == 0) //N % number == 0�~���j�A�������O
        {
            isPrime = 0;
        }
    }
    if (isPrime) ////���2��N�A�䤤���㰣�̬��D���
    {
        printf("Yes\n");
    }
            else
            {
                printf("No\n");
            }
    return 0;
}*/

int main()
{
    int N;
    printf("N = ");
    scanf("%d", &N);

    int number;
    for (number = 2; number < N && N % number != 0; ++number);
    if (number == N)
    {
        printf("Yes\n");
    }
            else
            {
                printf("No\n");
            }
    return 0;
}
