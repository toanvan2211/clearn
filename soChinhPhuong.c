#include <stdio.h>
#include <math.h>
int main()
{
    long a;
    scanf("%ld", &a);
    long c = (long)sqrt(a);
    if (a == c * c)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}