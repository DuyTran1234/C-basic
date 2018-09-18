//Vẽ lưu đồ và viết chương trình MENU như sau


#include <stdio.h>
int main()
{
    int a;
    printf("                        MENU                              \n\n");
    printf("==========================================================\n\n");
    printf("1. Logic building with C\n");
    printf("2. Data structure and algorithm\n");
    printf("3. Object oriented progamming using C#\n");
    printf("4. HTML - CSS - Javascript\n");
    printf("5. Database management system\n");
    printf("6. Network progamming fundamentals\n\n");
    printf("==========================================================\n\n");
    printf("Please seclect the option:");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Logic building with C");
        break;
    case 2:
        printf("Data structure and algorithm");
        break;
    case 3:
        printf("Object oriented progamming using C#");
        break;
    case 4:
        printf("HTML - CSS - Javascript");
        break;
    case 5:
        printf("Database management system");
        break;
    case 6:
        printf("Network progamming fundamentals");
        break;
    default:
        printf("cú pháp sai, vui lòng nhập lại");
        break;
    }
}