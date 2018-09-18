#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Nhap gia tri cua 3 so: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("gia tri truoc khi trao doi: a=%d, b=%d, c=%d\n", a, b, c);
    c = a;
    a = b;
    b = c;
    printf("gia tri sau khi trao doi: a=%d, b=%d, c=%d\n", a, b, c);
}