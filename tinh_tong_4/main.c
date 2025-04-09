#include <stdio.h>
#include <stdlib.h>
long long n;
double S = 0;

void nhap()
{
    do
    {
        printf("nhap vao so n: ");
        scanf("%lld", &n);
        if(n < 0 || n > 1000000000)
        {
            printf("ban da nhap so qua lon roi. nhap lai di: ");
        }
    }
    while(n < 0 || n > 1000000000);
}

void tinh()
{
    S = n *(n +1);
    printf("tong la: %.lf",S);
}

int main()
{
    nhap();
    tinh();

}
