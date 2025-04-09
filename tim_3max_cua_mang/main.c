#include <stdio.h>

void nhap()
{
    int n;
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n);

    if (n < 3)
    {
        printf("Mang phai co it nhat 3 phan tu!\n");
        return;
    }

    int a[n];
    printf("Nhap cac phan tu mang: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int max1 = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max1)
        {
            max1 = a[i];
        }
    }
    printf("Max 1: %d\n", max1);

    int max2 = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < max1 && a[i] > max2)
        {
            max2 = a[i];
        }
    }
    printf("Max 2: %d\n", max2);

    int max3 = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < max2 && a[i] > max3)
        {
            max3 = a[i];
        }
    }
    printf("Max 3: %d\n", max3);
}

int main()
{
    nhap();
    return 0;
}
