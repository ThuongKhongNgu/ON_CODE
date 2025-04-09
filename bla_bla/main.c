// Online C compiler to run C program online
#include <stdio.h>
#include <stdint.h>
//Bai 32. SO NHO THU 2
int a[] ={1, 7 ,3, 5 ,2};
int main(int agrc, char* argv[])
{
    int s1 = a[0];
    int s2 = a[0];
    printf("Ta co 1 mang gom 5 so\n");
    for (int i=0; i<5; ++i)
    {
        if(s1 < a[i])
        {
            s2 = s1;
            s1 = a[i];
        }
        else if(s2 < a[i] && s1 > a[i])
        {
            s2 = a[i];
        }
    }
    printf("so lon nhat la %d\n", s1);
    printf("so lon nhi la %d\n", s2);
}
