//Cho biết 1m = 0.000621371192mile. Hãy viết chương trình nhập vào số km
// và đổi sang đơn vị mile.

#include <stdio.h>
int main(){
float km;
printf("Nhập số km cần đổi sang mile:\n");
scanf("%f",&km);
printf("số mile được đổi từ km là: %f",1000*km*0.000621371192);




}