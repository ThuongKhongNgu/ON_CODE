#include <stdio.h>
#include <stdlib.h>
int a, b;
int x;
int bang;
int lon;
int min;

void nhap()
{
    do
    {
        printf("nhap vao so a: ");
        scanf("%d", &a);
        printf("nhap vao so b: ");
        scanf("%d", &b);
        if (b > a || b < 1 || a > 10000000) {
            if (b > a) {
                printf("gia tri b khong the lon hon a: \n");
            } else if (b < 1 || a < 1) {
                printf("a va b khong the nho hon 1: \n");
            } else if (a > 10000000 || b > 10000000) {
                printf("a va b qua lon roi: \n");
            }
        }
    } while (b > a || b < 1 || a > 10000000);
}

void nho_nhat()
{
    x = (a/b);
    min = a/x;
    printf("so chia het nho nhat la: %d\n", min);
}

void lon_hon() {
    lon = (a+b);
    printf("so chia het ma lon hon a la: %d\n", lon);
}

void bang_a() {
    bang = (a/b)*b;
    printf("so chia het bang a la: %d\n", bang);
}

int main()
{
    nhap();
    nho_nhat();
    lon_hon();
    bang_a();
}
