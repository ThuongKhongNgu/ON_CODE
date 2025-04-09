#include <stdio.h>
#include <stdlib.h>

void xin_chao()
{
    printf("xin chao ban!\n");
    printf("tong la %d\n", tong(100));
}

int tong(int n)
{
    return n * (n + 1) /2;
}

int main()
{
    xin_chao();
    return 0;
}
