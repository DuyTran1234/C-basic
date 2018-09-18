// Viết chương trình thực hiện việc nhập từ bàn phím số nguyên n
// và đưa ra màn hình n số trong dãy số Fibonacci.
#include <stdio.h>
int main()
{
    int a = 0, b = 1, d=2, n,c;
    printf("n số cần tìm trong dãy fibonanci: \n");
    scanf("%d", &n);

    do
    {
        d=d+1;
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        
    }while(d<n);
    return 0;
}