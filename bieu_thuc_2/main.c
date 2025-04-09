#include <stdio.h>
#include <stdlib.h>
int a, b, c;

void main()
{
 nhap();
 tinh();
}

void nhap() {
    do{
        printf("Hay nhap 3 so a, b, c vao: ");
        scanf("%d %d %d", &a, &b, &c);
        if (a <= 0 || b <= 0 || c <= 0 || a >= pow(10, 9) || b >= pow(10, 9) || c >= pow(10, 9)) {
           printf("vui long nhap lai: \n");
        }
    } while (a <= 0 || b <= 0 || c <= 0 || a >= pow(10, 9) || b >= pow(10, 9) || c >= pow(10, 9));
}

void tinh() {
int S;
S = a*(b+c)+b*(a+c);
printf("gia tri cua S la: %d\n",S);
}
