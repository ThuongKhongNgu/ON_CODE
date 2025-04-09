#include <stdio.h>
#include <stdlib.h>
int n;

void nhap()
{
    printf("nhap so phan tu trong mang: ");
    scanf("%d",&n);
    int a[n];
    printf("nhap phan tu vao: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf("gia tri lon nhat la: %d\n", max);
    int max2 = a[0];
    for(int i = 0; i < n; i++)
    {
        if(max2 <a[i] && a[i] != max)
        {
            max2 = a[i];
        }
    }
    printf("gia tri lon thu hai la: %d\n",max2);
}
int main()
{
    nhap();
    return 0;
}
