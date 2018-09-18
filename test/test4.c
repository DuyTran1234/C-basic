#include <stdio.h>
int main()
{
    int a;
    printf("Nhap 1 so de kiem tra chan le: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("a la so chan ");
    else
        printf("a la so le ");
}