#include <stdio.h>
#include <stdlib.h>

int n;
int tong = 0;

void nhap() {
printf("Nhap vao gia tri n: ");
scanf("%d",&n);
}

void tinh() {
for(int i = 1; i <= n; i++) {
    if(i%3==0) {
      tong ++;
    }
}
printf("tong cac so nguyen chia het cho 3 la: %d\n",tong);
}
int main() {
nhap();
tinh();
}
