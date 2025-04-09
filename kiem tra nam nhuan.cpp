#include<stdio.h>
int main() { 
int nam_nhuan;
printf(" Ban hay nhap vao nam muon tinh di: \n");
scanf("%d",&nam_nhuan);
if(nam_nhuan % 4 == 0 && nam_nhuan % 100!= 0 || nam_nhuan % 400 == 0)
printf(" Nam nay la nam nhuan \n");
else
printf(" Nam nay khong phai la nam nhuan \n");
}
