#include <stdio.h>
#include <stdlib.h>
// Doan code sau chinh la prototype cua function dientichHinhChuNhat :
double dientichHinhChuNhat (double chieuRong, double chieuDai);
int main (int argc, char *argv[ ])
{
printf ("Hinh chu nhat voi chieu rong 5 va chieu dai 10 co dien tich la %f\n",
dientichHinhChuNhat(5, 10));
printf ("Hinh chu nhat voi chieu rong 2.5 va chieu dai 3.5 co dien tich la %f\n",
dientichHinhChuNhat(2.5, 3.5));
printf ("Hinh chu nhat voi chieu rong 4.2 va chieu dai 9.7 co dien tich la %f\n",
dientichHinhChuNhat(4.2, 9.7));
return 0;
}
// function dientichHinhChuNhat bay gio co the dat o bat ki vi tri nao trong code source
 double dientichHinhChuNhat (double chieuRong, double chieuDai)
{
return chieuRong * chieuDai;
}
//mấy bài kai đâu