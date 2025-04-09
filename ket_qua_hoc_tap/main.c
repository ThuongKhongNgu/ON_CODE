#include <stdio.h>
#include <stdlib.h>
float diem_hs1, diem_hs11, diem_hs2, diem_hs3;
float DTB;

void nhap()
{
    printf("nhap vao diem he so 1 dau tien: ");
    scanf("%f", &diem_hs1);
    printf("nhap vao diem he so 1 thu hai: ");
    scanf("%f", &diem_hs11);
    printf("nhap vao diem he so hai: ");
    scanf("%f", &diem_hs2);
    printf("nhap vao diem he so ba: ");
    scanf("%f", &diem_hs3);
}

void tinh()
{
    DTB = (((diem_hs1 + diem_hs11) + (2*diem_hs2) + (3*diem_hs3)) / 7);
    if(DTB >= 8)
    {
        printf("GIOI");
    }
    else if(DTB < 8 && DTB >= 6.5)
    {
        printf("KHA");
    }
    else if(DTB < 6.5 && DTB >= 5)
    {
        printf("TRUNG BINH");
    }
    else
    {
        printf("YEU");
    }
}

int main()
{
    nhap();
    tinh();
}
