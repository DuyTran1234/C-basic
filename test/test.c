#include <stdio.h>
#include <string.h>
#define MYNAME "Derek Banas"
int globalVar = 100;

int main()
{

    printf("\n");

    int num1 = 10, num2 = 2;
    printf("Is 1>2 : %d\n\n", num1 > num2);

    if (num1 > num2)
    {
        printf("%d is greater then %d\n\n", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("%d is less then %d\n\n ", num1, num2);
    }
    else
    {

        printf("%d is equal to %d\n\n", num1, num2);
    }
}
