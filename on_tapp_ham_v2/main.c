#include <stdio.h>
#include <stdlib.h>

// Tính số nguyên tố
int snt(int n) {
    if (n < 2) {
        return 0;
    }
    for(int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Tính tổng các chữ số
int sum(int n) {
    int temp = 0;
    while (n > 0) {
        temp += n % 10; // Lấy chữ số cuối cùng và cộng vào temp
        n /= 10;        // Cập nhật n bằng cách bỏ chữ số cuối
    }
    return temp;
}

// Tính giai thừa
long long giai_thua(int n) {
    long long dem = 1; // Khởi tạo dem bằng 1
    for(int i = 1; i <= n; i++) {
        dem *= i; // Nhân dồn giai thừa
    }
    return dem;
}

int main() {
    int m;
    printf("Nhap m vao day: ");
    scanf("%d", &m);

    if (snt(m) == 1) {
        printf("Day la so nguyen to\n");
    } else {
        printf("Day khong phai la so nguyen to\n");
    }

    printf("Tong cac chu so la: %d\n", sum(m));
    printf("Giai thua cua %d la: %lld\n", m, giai_thua(m));

    return 0;
}
