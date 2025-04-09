#include <stdio.h>

int n;

void nhap() {
    do {
        printf("Nhap vao 1 so nguyen: ");
        scanf("%d", &n);
        if (n < 0 || n > 100000000) {
            printf("Ban da nhap sai, vui long nhap lai!\n");
        }
    } while (n < 0 || n > 100000000);
}

void tinh() {
    long long tong = 0;  // Biến tổng cục bộ
    for (int i = 1; i <= n; i++) {
        tong += i;
    }
    printf("Tong tu 1 den %d la: %lld\n", n, tong);
}

int main() {
    nhap();
    tinh();
    return 0;
}
