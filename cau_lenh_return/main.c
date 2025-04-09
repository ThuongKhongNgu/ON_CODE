#include <stdio.h>
#include <stdlib.h>

int chinh_phuong(int a) {
int can = sqrt(a);
if(can * can == a) {
    return 1;
}
else {
    return 0;
}
}

int main()
{
    int a = 16;
    if(chinh_phuong(a) == 1) {
        printf("YES");
    }
    else{
        printf("NO");
    }
}
