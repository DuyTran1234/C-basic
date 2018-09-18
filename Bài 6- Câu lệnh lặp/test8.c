// Vẽ lưu đồ và viết chương trình liệt kê n số nguyên tố đầu tiên
// (n nhập từ bàn phím)
#include <stdio.h>

int a, b=1, c, d, f, g, h;
int main()
{
    printf("Nhập n số hạng có trong dãy: \n");
    scanf("%d", &a);
    do
    {
        c=c+1;
        b= b + 1;
        if (b % 1 == 0 && b % b == 0 && b%2!=0)
        printf("%d ",b);

    }while(c<a);
    return 0;
}