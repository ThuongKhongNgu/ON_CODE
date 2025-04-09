#include <stdio.h>
#include <stdlib.h>
int do_C;
float do_F;

int main()
{
nhap();
tinh();
}

void nhap() {
    do{
        printf("nhap vao nhiet do, theo do C: ");
        scanf("%d",&do_C);
        if(do_C < 0 && do_C > pow(10,6)) {
            printf("ban nhap sai nhiet do roi, vui long nhap lai \n: ");
        }
    } while (do_C < 0 && do_C > pow(10,6));
}

void tinh() {
do_F = ((float)do_C * 9 / 5) + 32;
printf("nhiet do F la: %.2f\n", do_F);
}
