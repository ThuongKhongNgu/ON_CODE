#include <stdio.h>
#include <stdlib.h>

void nhap()
{
    int n;
    int tong = 0;

    printf("nhap so phan tu mang vao day: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i< n; i++)
    {
        scanf("%d",a+i);
    }
    for(int i = 0; i <n; i++)
    {
        if(a[i]%2==0)
        {
            tong += a[i];
        }
    }
    printf("tong so chan trong mang la: %d\n", tong);
}

int main()
{
    nhap();
}
