#include <stdio.h>
#include <stdlib.h>
int a, b;
int x;
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

void tinh()
{
 x = (a/b)*b;
    printf("ket qua la: %d\n", x);
}

int main()
{
    nhap();
    tinh();

}
