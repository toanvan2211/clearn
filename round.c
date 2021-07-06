#include <stdio.h>
#include <math.h>
int main()
{
    double a;
    scanf("%lf", &a); // %lf: long float

    // lay so phia sau dau cham (1.2 -> 0.2)
    //floor: lam tron xuong vd: 1.2 -> 1
    //ceil: lam tron len vd: 1.2 -> 2
    double soPhiaSauDauCham = a - floor(a); // vd: a = 2.2 -> temp = 0.2 || 2.2 - 2 = 0.2
    if (soPhiaSauDauCham >= 0.5)
        printf("%d", (int)ceil(a)); //làm tròn lên và ép kiểu về int
    else
        printf("%d", (int)floor(a)); //làm tròn lên và ép kiểu về int
}