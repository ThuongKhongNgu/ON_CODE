
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

    for(long long i = 1; i <=n; i++)
    {
        S += 1.0 / (i * (i + 1));
    }
    printf("tong la: %.2lf",S);
}

int main()
{
    nhap();
    tinh();

}
