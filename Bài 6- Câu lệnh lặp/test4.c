
//  Vẽ lưu đồ và viết chương trình thực hiện MENU sau:

#include <stdio.h>
int a;
int main()
{
    printf(" SO THICH CA NHAN\n");
    printf("==================\n");
    printf("1. Doc sach\n");
    printf("2. Nghe nhac\n");
    printf("3. Choi the thao\n");
    printf("4. May tinh\n");
    printf("5. Thoat\n");
    printf("==================\n");
    do
    {
        printf("Nhap so thu tu cua so thich: ");
        scanf("%d", &a);

        if (a == 1)
            printf("Ban thich doc sach\n");
        else if (a == 2)
            printf("Ban thich nghe nhac\n");
        else if (a == 3)
            printf("Ban thich choi the thao\n");
        else if (a == 4)
            printf("Ban thich may tinh");
        else if (a == 5)
            printf("HEN GAP LAI!");
        else printf("Ban da nhap sai");
    }
while (a != 5);
    
}