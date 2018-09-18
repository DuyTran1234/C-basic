#include <stdio.h>
int main()
{
    int a;
    printf("Nhap so a bat ky: ");
    scanf("%d", &a);
    if (a > 0)
        printf("a la so duong");
    else if (a == 0)
        printf("a khong am khong duong");
    else
        printf("a la so am");
}   `