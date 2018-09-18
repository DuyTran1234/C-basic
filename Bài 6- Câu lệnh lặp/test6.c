// Vẽ lưu đồ và viết chương trình yêu cầu nhập vào 2 số nguyên n, m 
//và in ra những số chia hết cho 7 trong khoảng 2 số vừa nhập.

#include <stdio.h>
int main()
{
    int m, n, a;
    printf("Nhập vào 2 khoảng n và m :\n");
    scanf("%d %d", &n, &m);
    do
    {

        n += 1;
        
        if (n%7==0)
        printf("số %d là số chia hết cho 7\n", n);

    } while (n < m);
    return 0;
}
