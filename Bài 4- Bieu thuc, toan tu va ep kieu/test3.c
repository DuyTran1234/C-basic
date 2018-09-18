
//Viết chương trình để tính toán lương thực lĩnh (net salary) của một nhân viên trong công ty
//Lương cơ bản: $12000
//Khoản DA: 12% của lương cơ bản
//Khoản HRA : $150
//Khoản TA : $120
//Khoản khác: $450
//Thuế đóng:
//Thuế PF: 14% của lương cơ bản
///Thuế IT: 15% của lương cơ bản
//Lương thực lĩnh = Lương cơ bản + DA + HRA + TA + Khoản khác – (PF + IT)
#include <stdio.h>
#include <math.h>
int main()
{
    float a;                                                                                     /* luong co ban */
    float DA = a * 12 / 100, HRA = 150, TA = 120, K = 450, PF = a * 14 / 100, IT = a * 15 / 100; /*K la khoan khac*/
    printf("Nhap luong co ban: ");
    scanf("%f", &a);
    printf("Luong thuc linh duoc la %f", a + DA + HRA + TA + K - PF - IT);
}