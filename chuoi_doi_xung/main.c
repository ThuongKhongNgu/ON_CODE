#include <stdio.h>

int kiemTraDoiXung(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)         // kt giua mang thoi nen n /2
    {
        if (a[i] != a[n - i - 1])           // a[n-i-1] như kiểu nó là phần tử gần cuối á
        {
            // ví dụ cho dễ hiểu nè:
            // Khi i = 0, a[n-0-1] = a[n-1] (phần tử cuối cùng).
            // Khi i = 1, a[n-1-1] = a[n-2] (phần tử kế cuối).
            return 0; // Không đối xứng
        }
    }
    return 1; // Đối xứng
}

int main()
{
    int n;
    printf("nhap so phan tu mang: ");
    scanf("%d", &n);
    char a[n];
    printf("nhap' chu:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Gọi hàm kiểm tra
    if (kiemTraDoiXung(a, n))
    {
        printf("doi xung\n"); // Mảng đối xứng
    }
    else
    {
        printf("khong doi xung\n"); // Mảng không đối xứng
    }
}
