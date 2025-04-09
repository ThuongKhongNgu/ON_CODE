#include <stdio.h>
#include "math.h"
int x;

 void main(){
 nhap();
 tinh_toan();
 }

 void nhap() {
 printf("ban hay nhap gia tri x vao: ");
 scanf("%d",&x);
 }

 void tinh_toan() {
 int A;
 A = pow(x,3) + 3*pow(x,2) + x + 1;
 printf("gia tri cua A la: %d\n",A);
 }
