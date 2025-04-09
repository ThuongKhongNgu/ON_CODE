#include <stdio.h>
#include <stdlib.h>
int nam;

void nhap()
{
    printf("nhap vao so a: ");
    scanf("%d", &nam);
}

void tinh()
{
    if(nam == 0 || nam < 0)
    {
        printf("INVALID");
    }
    else if(nam%400 == 0 || nam%4 == 0 && nam%100 != 0)
    {
        printf("Nam %d la nam nhuan", nam);
    }
    else
    {
        printf("Nam %d khong phai la nam nhuan",nam);
    }
}

int main()
{
    nhap();
    tinh();
}
