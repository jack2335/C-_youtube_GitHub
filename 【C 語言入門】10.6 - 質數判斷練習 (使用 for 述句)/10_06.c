#include <stdio.h>
//質數判斷練習
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
    for (number = 2; number < N; ++number) //number < N才做大括號內指令
    {
        if (N % number == 0) //N % number == 0才做大括號內指令
        {
            ++numberofDivisors;
        }
    }
    if (numberofDivisors == 0) ////比對2到N，其中有整除者為非質數
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
    for (number = 2; number < N; ++number) //number < N才做大括號內指令
    {
        if (N % number == 0) //N % number == 0才做大括號內指令
        {
            isPrime = 0;
        }
    }
    if (isPrime == 1) ////比對2到N，其中有整除者為非質數
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
    for (number = 2; number < N && isPrime; ++number) //number < N才做大括號內指令
    {
        if (N % number == 0) //N % number == 0才做大括號內指令
        {
            isPrime = 0;
        }
    }
    if (isPrime) ////比對2到N，其中有整除者為非質數
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
