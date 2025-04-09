#include <stdio.h>
#include <stdlib.h>
int a, b, c;

void nhap()
{
    printf("nhap vao so a: ");
    scanf("%d", &a);
    printf("nhap vao so b: ");
    scanf("%d", &b);
    printf("nhap vao so c: ");
    scanf("%d", &c);
}

void tinh()
{
    if(a/b==c || b/c==a || c/a==b)
    {
        printf("/");
    }
    else {
        printf("NOSOL");
    }
}

int main()
{
    nhap();
    tinh();
}
