#include <stdio.h>
#include <stdlib.h>
int n;
int dem = 0;

void nhap()
{
    printf("nhap so phan tu mang vao day: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i< n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0; i <n; i++)
    {
        if(a[i]%2==0)
        {
            dem++;
        }
    }
    printf("tong so chan trong mang la: %d\n", dem);
}

int main()
{
    nhap();
}
