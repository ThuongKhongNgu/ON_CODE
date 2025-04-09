#include <stdio.h>
#include <stdlib.h>

void nhap() {
int n;
printf("nhap so phan tu mang vao: ");
scanf("%d",&n);
if(n<4) {
    printf("mang phai co it nhat 3 phan tu");
    return 0;
}
int a[n];
printf("nhap phan tu vao: ");
for(int i = 0; i< n; i++) {
    scanf("%d",&a[i]);
}
int min1 = a[0];
int min2 = a[0];

for(int i = 0; i < n; i++) {
    if(min1 > a[i]) {
        min2 = min1;
        min1 = a[i];
    }

    else if (min2 > a[i] && min1 < a[i]){
        min2 = a[i];
    }

}
printf("nho nhat la: %d\n",min1);
printf("nho nhi la: %d\n",min2);

}
//int min3 = a[0];
//for(int i = 0; i < n; i++) {
//    if(a[i] > min2 && min3 < a[i]) {
//        min3 = a[i];
//    }
//
//printf("nho nhat la: %d\n",min1);
//printf("nho nhi la: %d\n",min2);
//printf("nho b la: %d\n",min3);


int main()
{
    nhap();
    return 0;
}
