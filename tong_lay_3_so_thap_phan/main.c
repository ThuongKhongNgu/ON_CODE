#include <stdio.h>
#include <stdlib.h>

float n;
float tong = 0;
float S;

void nhap() {
printf("Nhap vao gia tri n: ");
scanf("%f",&n);
}

void tinh() {
for(float i = 1; i <= n; i++) {
    S = 1/(1*i);
    tong += S;
    }
printf("tong cac so nguyen la: %.3f\n",tong);
}
int main() {
nhap();
tinh();
}
