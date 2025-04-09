#include <stdio.h>
#include <stdlib.h>

void nhap(){
    int n;
    printf("Nhap so phan tu mang vao day: ");
    scanf("%d", &n);
    int a[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
// Khởi tạo max bằng giá trị đầu tiên của mảng
    int max = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("Max la: %d\n", max);
}

int main()
{
    nhap();
}
