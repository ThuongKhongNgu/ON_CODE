#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x ;
    int y ;
    int z;
    scanf("nhap vao 2 so diem: %d %d",&x,&y);
    z = x + y;
    printf("tong diem cua ban la: z = %d\n",z);

    float a;
    float b ;
    float c;

    scanf("%f %f",&a,&b);
    c = a + b;
    printf("c = %f\n",c);

    char* Thuong = "hoc gioi";
    char* Thu = "hoc ngu";
    printf("Trong lop thi Thuong %s, ra ngoai thi Thu %s\n",Thuong,Thu);
    return 0;
}
