#include <stdio.h>
#include <unistd.h>
int main()
{
    float a, b;     // số a và b
    char c, choose; // chứa kí tự đại diện cho toán tử do người dùng nhập (+,-,*,/)

    do
    {
        printf("\e[1;1H\e[2J\n"); //Xoá screen
        printf("Ban muon lam gi?\n");
        printf("1. Tinh toan.\n");
        printf("2. Thoat.\n");
        printf("Nhap lua chon: ");
        scanf("%c", &choose);
        if (choose == '1')
        {
            printf("Nhap phep toan: ");
            scanf("%f %c %f", &a, &c, &b); // Get Input
            switch (c)                     // có thể xài if else hoặc dùng cách này
            {
            case '+':
                printf("Ket qua: %.2f\n", a + b);
                break;
            case '-':
                printf("Ket qua: %.2f\n", a - b);
                break;
            case '*':
                printf("Ket qua: %.2f\n", a * b);
                break;
            case '/':
                if (b == 0)
                    printf("Math Error\n");
                else
                    printf("Ket qua: %.2f\n", a / b);
                break;
            }
            printf("__________________________________________\n");
            printf("Press Any Key to Continue\n");
            getchar();
        }
    } while (choose != '2');
}