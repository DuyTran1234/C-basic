#include <stdio.h>
int main()
{

    int a, b;
    printf("Nhap 2 so a va b:\n");
    scanf("%d %d", &a, &b);
    printf("Gia tr truoc khi thay doi la: a=%d, b=%d\n", a, b);
    a = a + b;
    b = b - a;
    a = b - a;
    printf("gia tri sau khi thay doi la: a=%d, b=%d\n", a, b);
}