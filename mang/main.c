#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
    float so_chan[5] = {0.1, 2.2, 4.4};
    int so_le[5] ={1,3,5,7,9};
    printf("so chan dau tien la %.1f %.1f %.1f\n", so_chan[0],so_chan[1],so_chan[2]);
    printf("so le la %d %d %d %d\n", so_le[0],so_le[1],so_le[2], so_le[3],so_le[4]);
}
*/

/* ở đây kiểu số nguyên sẽ được khai báo là int, số thực sẽ khai báo là float
khi viết trong mảng có bao nhieu ký tự thì ta ghi rox ra ở ngoạt vuông. Ví dụ như int so_le[5] ={1,3,5,7,9};
khi ta int ra ngoài thì số thực sẽ dùng %f số nguyên dùng %d
muốn int ra bao nhiêu số thì liệt ke bấy nhiêu phần tử */
int main()
{
    char mang_ky_tu[5] = {'a', 'b', 'c','d','e'};
    char mang_pro[] = "Vo-Hoai-Thuong";
    printf("mang ky tu la %c %c %c %c %c\n", mang_ky_tu[0],mang_ky_tu[1],mang_ky_tu[2],mang_ky_tu[3],mang_ky_tu[4]);
    printf("mang lien tiep se la %s\n", mang_pro);
    return 0;
}

