/*#include <stdio.h>
int main()
{
    unsigned int next = 1;
    for (int i = 1; i <= 5; i++)
    {
        next = next * 1103515245 + 12345;
        int rand = (unsigned int) (next / 65536) % 32768;
        printf("%u\n", rand);
    }
    return 0;
}*/

/*#include <stdio.h>

int rand(void)
{
    unsigned int next = 1;
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}

int main()
{
    unsigned int next = 1;
    for (int i = 1; i <= 5; i++)
    {

        printf("%u\n", rand());
    }
    return 0;
}*/

/*#include <stdio.h>

unsigned int next = 1;

int rand(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}

int main()
{
    unsigned int next = 1;
    for (int i = 1; i <= 5; i++)
    {

        printf("%u\n", rand());
    }
    return 0;
}*/

/*#include <stdio.h>
int rand(void)
{
    static unsigned int next = 1;
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}
int main()
{
    unsigned int next = 1;
    for (int i = 1; i <= 5; i++)
    {
        printf("%u\n", rand());
    }
    return 0;
}*/

/*#include <stdio.h>
int rand(void)
{
    static unsigned int next = 1;
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%u\n", rand());
    }
    return 0;
}*/

/*#include <stdio.h>
#include <time.h>
unsigned int next = 1;

int rand(void)
{
    next = next * 1103515245 + 12345;
    return next / 65536 % 32768;
}

void srand(unsigned int seed)
{
    next = seed;
}

int main()
{
    srand(time(0));
    for (int i = 1; i <= 5; i++)
    {
        printf("%u\n", rand());
    }
    return 0;
}*/

/*#include <stdio.h>
#include <time.h>
unsigned int _next = 1;

int rand(void)
{
    _next = _next * 1103515245 + 12345;
    return _next / 65536 % 32768;
}

void srand(unsigned int seed)
{
    _next = seed;
}

int main()
{
    srand(time(0));
    for (int i = 1; i <= 5; i++)
    {
        printf("%u\n", rand());
    }
    return 0;
}*/

#include <stdio.h>
#include <time.h>
static unsigned int _next = 1;

int rand(void)
{
    _next = _next * 1103515245 + 12345;
    return _next / 65536 % 32768;
}

void srand(unsigned int seed)
{
    _next = seed;
}

int main()
{
    srand(time(0));
    for (int i = 1; i <= 5; i++)
    {
        printf("%u\n", rand());
    }
    return 0;
}
