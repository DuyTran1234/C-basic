
// Vẽ lưu đồ và viết chương trình nhập một số nguyên dương bất kỳ, tính
// tổng các chữ số của nó. 
//Ví dụ: nhập số 2134256 => tổng các chữ số: 23
#include <stdio.h>
#include <conio.h>

int main()
{
    int n, tong = 0, m;

    printf("Nhap mot so bat ky: ");
    scanf("%d", &n);
    while (n > 0)
    {
        m = n % 10;
        tong = tong + m;
        n = n / 10;
    }
    printf("\nTong cac ky so cua so da cho = %d", tong);

    getch();
}