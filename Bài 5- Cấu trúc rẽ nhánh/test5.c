//Viết chương trình cho phép nhập một ký tự Alphabet(A-Z, a-z) từ bàn
//phím, nếu ký tự không thuộc bảng Alphabet thì thông báo không thuộc bảng
//chữ cái, nếu ký tự thuộc bảng chữ cái thì xác định xem nó là
//Nguyên âm(A, E, I, O, U, a, e, i, o, u) hay Phụ âm(các chữ cái còn lại).



#include <stdio.h>

int main()
{
    char a = 0;
    printf("nhap vao mot ky tu Alphabet: \n");
    scanf("%c", &a);
    
    if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
        printf("Thuoc bang chu cai\n ");
    
        if (a == 'A')
            printf("Day la nguyen am\n");
        else if (a == 'E')
            printf("Day la nguyen am\n");
        else if (a == 'I')
            printf("Day la nguyen am\n");
        else if (a == 'O')
            printf("Day la nguyen am\n");
        else if (a == 'U')
            printf("Day la nguyen am\n");
        else if (a == 'a')
            printf("Day la nguyen am\n");
        else if (a == 'e')
            printf("Day la nguyen am\n");
        else if (a == 'i')
            printf("Day la nguyen am\n");
        else if (a == 'o')
            printf("Day la nguyen am\n");
        else if (a == 'u')
            printf("Day la nguyen am\n");
    




}