#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    float toan;
    float ly;
    float hoa ;
    float diem_trung_binh;
    float diem_dau_dh;
    scanf("%f %f %f",&toan, &ly, &hoa);
    diem_trung_binh = (toan + ly + hoa)/3;
    diem_dau_dh = (toan + ly + hoa)+0.25;
    printf("diem dau cua ban la: = %.2f\n", diem_trung_binh);
    printf("diem dau cua ban la: = %.2f\n", diem_dau_dh);
}
*/
int main() {
float toan;
float ly;
float hoa;
float DTB;
scanf("%f %f %f",&toan, &ly, &hoa);
DTB = (toan + ly + hoa)/3;
if (DTB >= 8)
    printf (" ban la chum TRUONG", DTB);
    else if (DTB >=7)
        printf (" ban kha gioi day ma thua tui", DTB);
    else if (DTB >=6)
        printf (" HOI NGU NHA NI", DTB);
    else if (DTB <=5)
        printf (" MAY NGHI HOC DI THANG LON", DTB);
    else
    printf ("Vo day la sai roi");
}
