#include <stdio.h>
#include <stdlib.h>

float R;
float pi = 3.14;
float chuvi;
float dientich;

int main()
{
    nhap();
    chu_vi();
    dien_tich();
}

void nhap()
{
    do
    {
        printf("ban hay nhap ban kinh hinh torn vao day: ");
        scanf("%f", &R);
        if(R < 1 && R > pow(10, 6))
        {
            printf("ban da nhap sai: \n");
        }
    }
    while (R < 1 || R > pow(10, 6));
}

void chu_vi() {
chuvi = 2*pi*R;
printf("chu vi hinh trin la: %.1f \n", chuvi);
}

void dien_tich() {
dientich = (pow(chuvi,2)) / 4*pi;
printf("dien tich hinh chu nhat la: %.1f\n", dientich);
}
