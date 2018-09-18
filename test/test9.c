#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <string.h>

int main()
{
    float a, b, c, d, x1, x2;
    printf("Nhap vao gia tri cua tham so trong phuong trinh bac 2:\n");
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0)
        printf("gia tri cua 2 nghiem lan luot la: x1=%f, x2=%f\n", x1 = (-b + sqrt(d)) / 2 * a, x2 = (-b - sqrt(d) / 2 * a));
    else if (d == 0)
        printf("pt co nghiem duy nhat la x1=%f\n ", x1 = -b / 2 * a);
    else
        printf("phuong trinh vo nghiem\n");
}