#include <stdio.h>
#include <stdlib.h>
long long n;

void nhap()
{
    do
    {
        printf("nhap vao so n: ");
        scanf("%lld", &n);
        if(n < 0 || n > 100000)
        {
            printf("ban da nhap so qua lon roi. nhap lai di: ");
        }
    }
    while(n < 0 || n > 100000);
}

void tinh()
{
    long long S = 0;
    for(int i = 1; i <=n; i++)
    {
        S += (long long) i * i; // này ép kiểu int của i cho về dạng long long để tránh tràn
    }
    printf("tong la: %lld",S);
}

int main()
{
    nhap();
    tinh();

}
