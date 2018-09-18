
//Vẽ lưu đồ và viết chương trình nhập vào 2 số num1, num2 và 
//hiển thị MENU như sau:
#include <stdio.h>
int main()
{
    float num1, num2;
    //char a = '+';
    //char b='-';
    // char c='*';
    //  char d=':';
    char e ;
    printf("nhập 2 số: \n");
    scanf("%f %f", &num1, &num2);

    printf("             MENU                \n\n");
    printf("=================================\n\n");
    printf("+                                \n");
    printf("-                                \n");
    printf("*                                \n");
    printf(":                                \n\n");
    printf("=================================\n\n");
    printf("Select operand (+, -, *, :) :  ");
    

    scanf(" %c", &e);
    switch (e)
    {
    case '+':
        printf("num1+num2= %.2f", num1 + num2);
        break;
    case '-':
        printf("num1-num2= %.2f", num1 - num2);
        break;
    case '*':
        printf("num1*num2= %.2f", num1 * num2);
        break;
    case ':':
        printf("num1:num2= %.2f", num1 / num2);
        break;
    default:
        printf("nhap sai ky tu");
    }
}