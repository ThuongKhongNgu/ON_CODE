#include <stdio.h>

void nhap() {
printf("xin chao cac ban\n" );
}

int tonguoc(int n) {
    int tong = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            tong += i;
        }
    }
    return tong;
}

int main() {
    nhap();

    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tong cac uoc cua %d la: %d\n",n, tonguoc(n));
    return 0;
}
