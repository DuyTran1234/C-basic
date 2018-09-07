#include <stdio.h>
int main()
{
    int a;
    printf(" Nhap so nam can tra cuu %d ", a);
    scanf("%d", &a);
    if (a % 4 == 0)
        printf("%d la nam nhuan", a);
    else
        printf("%d khong phai la nam nhuan", a);
}