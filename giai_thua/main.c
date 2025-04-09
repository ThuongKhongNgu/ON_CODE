#include <stdio.h>
#include <stdlib.h>

int n;
int S = 1;

void nhap() {
printf("Nhap vao so khong am: ");
scanf("%d",&n);
}

void tinh() {
for(int i = 1; i <= n; i++) {
    S *= i;
    }
printf("tong cac so chan la: %d\n",S);
}
int main() {
nhap();
tinh();
}
