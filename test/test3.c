#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Hay Nhap 3 so a, b va c: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)

        printf("a la gia tri lon nhat");
    else if (b > a && b > c)

        printf("b la gia tri lon nhat");

    else if (c > a && c > b)
        printf("c la gia tri lon nhat");

    else
        printf("3 so bang nhau");
}