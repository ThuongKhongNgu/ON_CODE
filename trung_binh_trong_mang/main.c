#include <stdio.h>
#include <stdlib.h>

void nhap()
{
    int n;
    float trung_binh;
    int tong = 0;

    printf("nhap so phan tu mang vao day:");
    scanf("%d",&n);
    int a[n];
    printf("nhap phan tu: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < n; i++)
    {
        tong += a[i];
    }
    trung_binh = (float)tong / n;
    printf("trung binh la: %.2f\n", trung_binh);
}
int main()
{
    nhap();
    return 0;
}
