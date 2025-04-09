#include <stdio.h>
#include <stdlib.h>

void nhap()
{
    int n;
    printf("nhap so phan tu mang vao day: ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i< n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = n -1; i >= 0; i--) {    // khi tạo mảng ngược nên láy số phần tử nhập trừ đi 1 để trnahs lúc khởi tạo bị rác
       printf("%d ", a[i]);
    }
}

int main()
{
    nhap();
}
