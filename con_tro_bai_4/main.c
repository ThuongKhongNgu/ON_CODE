#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[5] = {1, 2, 3, 4, 5};
int *ptr = a;
++ptr;
printf("%d\n",*ptr);
--ptr;
printf("%d\n",*ptr);
ptr += 3;
printf("%d\n",*ptr);
}
