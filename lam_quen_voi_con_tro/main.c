#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 300;
    int *ptr;        // day la mot con tro kieu int: khai bao con tro
                     // khoi tao gia tri cho con tro
    ptr = &a;        // dau & la 1 toan tu dia chi
                     // de giup con tro tro toi dia chi do va lay gia tri cua bien a
    printf("gia tri cua con tro la: %d\n",ptr);
    printf("dia chi cua bien a la: %d\n",&a);

    // day tham chieu dereferencing
    printf("gia tri cua bien a: %d\n",a);
    printf("gia tri cua bien ma con tro dang quan ly: %d\n",*ptr);
    // luu y: - khi khai bao bien neu truoc ten bien co dau * thi do la con tro
    //        - sau khi da khai bao xong r va sd o duoi thi dau * nay lai la toan tu day tham chieu
    // tu con tro ta thay doi gia tri cua bien da gan truoc do nhu sau:
    *ptr = 1000;
    printf("gia tri cua bien a hien tai la: %d\n",*ptr);
    printf("gia tri cua bien a hien tai la: %d\n", a);
}
