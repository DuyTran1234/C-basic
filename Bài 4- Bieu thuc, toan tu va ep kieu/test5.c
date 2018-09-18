

// Viết chương trình nhập vào 2 số nguyên từ bàn phím và sử dụng các toán 
//tử bitwise (and, or, xor - &, |, ^) với 2 số nguyên đó rồi hiển thị kết quả ra màn hình.

#include <stdio.h>
int main()
{
    int a, b;
    printf("Nhập vào 2 số nguyeena và b: \n");
    scanf("%d %d", &a, &b);
    printf("a|b = %d\n", a | b);
    printf("a&b = %d\n", a & b);
    printf("a^b = %d\n", a ^ b);
}
