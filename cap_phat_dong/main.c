#include <stdio.h>
#include <stdlib.h>

// cap phat dong co 2 ham: calloc va malloc
// nhung su dung pho bien hon la ham malloc
// cu phap ham nhu sau: dataType *pointerName = (type_cast*)malloc(size of byte);

int main()
{
int *ptr = (int*)malloc(900000000* sizeof(int));
// check kiem tra xem coi luc minh nhap du lieu vao thi no co tran hay khong
//if(ptr == NULL) {
//    printf("bo nho da bi tran");
//}
//else {
//    printf("thoai mai nhe bro");
//}
int n =5;
for(int i = 0; i < n; i++) {
    scanf("%d",&ptr[i]);
}
for(int i = 0; i < n; i++) {
    printf("%d ",ptr[i]);
}
free(ptr);      // giai phong bo nho xin cap phat
}
