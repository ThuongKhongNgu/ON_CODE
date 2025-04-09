#include <stdio.h>
#include <stdlib.h>

void nhap() {
int n;
int chan = 0;
int le = 0;

printf("nhap so phan tu mang vao day:");
scanf("%d",&n);
int a[n];
printf("nhap phan tu: ");
for(int i = 0; i < n; i++) {
    scanf("%d",&a[i]);
}
for(int i = 0; i < n; i++) {
    if(a[i] %2 == 0) {
        chan++;
    }
    else {
        le++;
    }
}
printf("tong so chan la: %d\n", chan);
printf("tong so le la: %d", le);
}
int main()
{
    nhap();
    return 0;
}
