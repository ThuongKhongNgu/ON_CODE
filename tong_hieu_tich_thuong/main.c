#include <stdio.h>
#include <stdlib.h>

int a,b;

int main()
{
nhap();
tong();
hieu();
tich();
thuong();
}

void nhap() {
    do {
        printf("ban hay nhap vao day 2 so nguyen a, b: ");
        scanf("%d %d", &a, &b);
        if(b ==0 || a <= pow(-10,9) || b <= pow(-10,9) || a >= pow(10,9) || b >= pow(10,9))
        {
           printf("hay nhap lai a va b: ");
        }

    } while (b ==0 || a <= pow(-10,9) || b <= pow(-10,9) || a >= pow(10,9) || b >= pow(10,9));
}


void tong() {
int tong = a + b;
printf("tong la: %d\n", tong);
}

void hieu() {
int hieu = a - b;
printf("hieu la: %d\n", hieu);
}

void tich() {
int tich = a * b;
printf("tich la: %d\n", tich);
}

void thuong() {
float thuong = (int)a / b;
printf("thuong la: %.2f\n", thuong);
}
