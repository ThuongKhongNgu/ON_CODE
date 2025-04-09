#include <stdio.h>

int main() {
    nhap();
    tinh_toan();
}

void nhap() {
    int a,b;
    printf("Nhap vao so a: ");
    scanf("%d", &a);

    do {
        printf("Nhap vao so b (khac 0): ");
        scanf("%d", &b);
        if (b == 0) {
            printf("b phai khac 0, vui long nhap lai!\n");
        }
    } while (b == 0);
}

void tinh_toan() {
    int a,b;
    int phan_nguyen = a / b;
    int phan_du = a % b;

    printf("Phan nguyen la: %d\n", phan_nguyen);
    printf("Phan du la: %d\n", phan_du);
}
