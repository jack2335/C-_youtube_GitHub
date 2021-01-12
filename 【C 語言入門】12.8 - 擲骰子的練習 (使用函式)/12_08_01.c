/*#include <stdio.h>
int main()
{
    return 0;
}*/

/*#include <stdio.h>

int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        int dice;
        printf("%d\n", dice);
    }
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        int dice = rand();
        printf("%d\n", dice);
    }
    return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int i;
    for (i = 1; i <= 5; i++)
    {
        int dice = rand();
        printf("%d\n", dice);
    }
    return 0;
}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int i;
    for (i = 1; i <= 5; i++)
    {
        int dice = rand() %6 +1;
        printf("%d\n", dice);
    }
    return 0;
}
