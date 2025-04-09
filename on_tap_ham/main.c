#include <stdio.h>
#include <stdlib.h>

int tong(int a, int b)
{
    return a +b;
}

int hieu(int a, int b)
{
    return a - b;
}

int tich (int a, int b)
{
    return a * b;
}

float thuong(int a, int b)
{
    if(b == 0) {
        printf("khong the thuc hien phep tinh");
    return 0;
    }
    return (floata / b;
}

int main()
{
    int m;
    int n;
    printf("ban hay nhap vao day 2 so nguyen:");
    scanf("%d%d",&m,&n);
    printf("cong la: %d\n",tong(m,n));
    printf("tru la: %d\n",hieu(m,n));
    printf("nhan la: %d\n",tich(m,n));
    printf("chia la: %.2f\n",thuong(m,n));
    return 0;
}
