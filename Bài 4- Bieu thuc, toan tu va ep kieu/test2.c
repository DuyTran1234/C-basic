

//Viết chương trình C để tính diện tích và chu vi của hình tròn,
// chữ nhật và tam giác
#include <stdio.h>
#include <math.h>
#include <string.h>
void rectangle();
void triangular();
void circle();
int main()
{

    rectangle();
    triangular();
    circle();
}

void rectangle()
{
    float a, b;
    printf("%.1f", sqrt(4));
    printf("Nhap chieu dai va rong:\n");
    scanf("%f %f", &a, &b);
    printf("chu vi cua hinh chu nhat la %.1f \ndien tich cua hinh chu nhat la %.1f\n", (a + b) * 2, a * b);
}
void triangular()
{
    float c, d, e;
    float p = (c + d + e) / 2;
    float P = c + d + e;
    float S = (float)sqrt(p * (p - c) * (p - d) * (p - e));
    printf("Nhap lan luot 3 canh hinh tam giac\n");
    scanf("%f %f %f", &c, &d, &e);
    printf("%f,%f,%f", c, d, e);
    //float p = (c + d + e) / 2;
    //float P = c + d + e;
    //float S = (float)sqrt(p * (p - c) * (p - d) * (p - e));
    printf("chu vi hinh tam giac la %.1f \n dien tich hinh tam giac la %.1f \n ", P, S);
}
void circle()
{
    int R;
    printf("Nhap vao ban kinh hinh tron: \n");
    scanf("%f", &R);
    printf("chu vi cua hinh tron la %f, dien tich cua hinh tron la %f", R * 2 * 3.14, R * R * 3.14);
}
