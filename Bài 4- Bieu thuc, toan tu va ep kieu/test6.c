
//Cho biểu thức sau: exp = x3 + 3x2 + 3xy2 + y3 với x, y là các giá trị
//nguyên nhập từ bàn phím. Hãy tính giá trị của biểu thức exp và hiển thị
// kết quả lên màn hình console.
#include <stdio.h>
#include <math.h>
int main(){
    int x,y;
   // int A=pow(x,3)+3*pow(x,2)+3*x*pow(y,2)+pow(y,3);
    printf("Nhập vào giá trị x và y: \n");
    scanf("%d %d",&x,&y);
    printf("biểu thức exp=%d\n",x*3+3*x*2+3*x*y*2+y*3);
}
