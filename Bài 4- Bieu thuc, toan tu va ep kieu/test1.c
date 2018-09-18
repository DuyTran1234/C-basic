//Viết chương trình C để nhập vào 2 số num1, num2, hoán đổi giá trị của 
//chúng rồi tăng giá trị mỗi biến lên 1 đơn vị. Sau đó hiển thị kết quả
// ra màn hình console.
//Viết chương trình C để tính diện tích và chu vi của hình tròn,
// chữ nhật và tam giác
#include <stdio.h>
int main(){
    int num1,num2;
printf("nhap 2 so\n");
scanf("%d %d", &num1, &num2);
printf("gia tri cua num1 khi thay doi: %d\n",++num1);
printf("gia tri cua num2 khi thay doi: %d\n",++num2);
return 0;
}// cho hết vào 1 fold