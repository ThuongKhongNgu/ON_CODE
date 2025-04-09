#include <stdio.h>
#include <stdlib.h>
int a;

void nhap()
{
        printf("nhap vao so a: ");
        scanf("%d", &a);
}

void tinh() {
    if(a%3 == 0 && a %5 == 0) {
      printf("1", a);
    } else {
    printf("0",a);
    }
}

int main()
{
    nhap();
    tinh();
}
