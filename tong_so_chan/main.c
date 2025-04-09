#include <stdio.h>
#include <stdlib.h>

int n;
int tong = 0;
int S;

void nhap() {
printf("Nhap vao gia tri n: ");
scanf("%d",&n);
}

void tinh() {
for(int i = 0; i <= n; i++) {
    S = 2*i;
    tong += S;
    }
printf("tong cac so chan la: %d\n",tong);
}
int main() {
nhap();
tinh();
}
