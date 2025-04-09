#include <stdio.h>
#include <stdlib.h>

// pass by value
void tang1(int a) {
a += 100;
}

// pass by reference
void tang2(int *a) {    // ham tang nay co tham so la con tro kieu int
*a += 100;              // toan tu giai tham chieu
}


// bai toan dung bien tam de hoan doi vi tri 2 so
void swap(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;
}
int main()
{
//    int a = 300;
//    tang1(a);
//    printf("gia tri cua bien a khi ham tang 1 ket thuc la: %d\n",a);
//    tang2(&a);  // khi goij ham co tham so la mot con tro ta phai chen them dia chi vao, dau &
//    printf("gia tri cua bien a khi ham tang 2 ket thuc la: %d\n",a);
int x = 1000, y = 2000;
swap(&x, &y);
printf("gia tri da duoc hoan doi nhu sau: %d %d",x,y);
    return 0;
}
