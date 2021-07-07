#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d;
    scanf("%f%f%f", &a, &b, &c);
    if ((a == 0 && b == 0) || (a == 0 && b != 0))
    {
        printf("VONGHIEM");
    }
    else
    {
        d = b * b - 4 * a * c;
        if (d > 0)
        {
            float x1, x2;
            x1 = (-b - sqrt(d)) / (2 * a);
            x2 = (-b + sqrt(d)) / (2 * a);

            if (x1 > x2)
            {
                printf("%.2f %.2f", x2, x1);
            }
            else
                printf("%.2f %.2f", x1, x2);
        }
        else if (d = 0)
        {
            printf("%.2f %.2f", -b / 2 * a, -b / 2 * a);
        }
        else
        {
            printf("VONGHIEM");
        }
    }
}