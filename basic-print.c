#include <stdio.h>

int tinhTong(int a, int b)
{ //parameter
    return a + b;
}
int tinhHieu(int a, int b)
{ //parameter
    return a - b;
}
int tinhTich(int a, int b)
{ //parameter
    return a * b;
}
int tinhThuong(int a, int b)
{ //parameter
    if (b == 0)
        return;
    return (int)(a / b);
}

int tinhTongChan(int a, int b)
{
    int TongChan = 0;
    //Duyet tu a toi b
    for (int i = a; i <= b; i++)
    {
        //Kiem tra dieu kien, co phai so chan hay k?
        if (i % 2 == 0)
            TongChan += i; //TongChan = TongChan + i
        //Khong la so chan-> i++
    }
    return TongChan;
}

int tinhTongLe(int a, int b)
{
    int TongLe = 0;
    //Duyet tu a toi b
    for (int i = a; i <= b; i++)
    {
        //Kiem tra dieu kien, co phai so le hay k?
        if (i % 2 != 0)
            TongLe += i; //TongChan = TongChan + i
        //Khong la so le-> i++
    }
    return TongLe;
}

void InMang(int mang[], int soLuong)
{
    for (int i = 0; i < soLuong; i++)
    {
        printf("%d \t", mang[i]);
    }
    printf("\n");
}

//Đổi chỗ 2 số nguyên
void swap(int a, int b)
{
    //vd: a = 5, b = 10
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    printf("Nhap vao so dau: ");
    scanf("%d", &a);
    printf("Nhap vao so cuoi: ");
    scanf("%d", &b);

    int soLuong = b - a + 1;

    //Khởi tạo mảng
    int data[soLuong];
    //Khai báo giá trị cho mảng
    for (int i = 0; i < soLuong; i++)
    {
        data[i] = a + i;
    }

    InMang(data, soLuong);

    /*int c = tinhTongChan(a, b);
    printf("Tong chan tu %d - %d= %d", a, b, c);
    c = tinhTongLe(a, b);
    printf("Tong chan tu %d - %d= %d", a, b, c);
    printf("\n%d%d%d", a, b, c); */
    return 0;
}
