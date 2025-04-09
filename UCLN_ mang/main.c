#include <stdio.h>
#include <stdlib.h>

void nhap() {
int n;
printf("Nhap so phan tu mang: ");
scanf("%d",&n);
int a[n];
printf("Nhap phan tu mang vao: ");
for(int i = 0; i < n; i++) {
    scanf("%d",&a[i]);
}
// tìm UCLN
int ucln = a[0];
for(int i = 0; i< n; i++) {
    int x = ucln, y = a[i];
    while(y!= 0) {
        int temp = y;
        y = x%y;
        x = temp;
    }
    ucln = x;
}
printf("uoc chung lon nhat la: %d\n",ucln);
}
int main()
{
    nhap();
    return 0;
}
