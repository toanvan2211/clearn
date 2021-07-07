#include <stdio.h>
int main()
{
    int year;
    scanf("%d", &year);
    if (year < 0 && year > 100000)
    {
        printf("INVALID");
    }
    else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("YES");
    }
    else if (year % 400 == 0)
    {
        printf("YES");
    }
    else
        printf("NO");
}