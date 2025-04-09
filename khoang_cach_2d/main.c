#include <stdio.h>
#include <stdlib.h>
int x1, x2, y1, y2;
int khoang_cach;

int main()
{
nhap();
tinh();
}
 void nhap() {
 printf("nhap vao toa do x1 x2: ");
 scanf("%d %d", &x1, &x2);
 printf("nhap vao toa do y1 y2: ");
 scanf("%d %d", &y1, &y2);
 }

 void tinh() {
 khoang_cach = sqrt((pow(x2,2)-pow(x1,2)) + (pow(y2,2)-pow(y1,2)));
 printf("khoang cach 2 diem la: %d\n", khoang_cach);
 }
