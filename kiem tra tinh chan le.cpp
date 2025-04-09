#include <stdio.h>
int main() {
	int so_nguyen;
	printf("Ban hay nhap vao 1 so di: \n");
	scanf("%d", &so_nguyen);
	if(so_nguyen % 2 == 0)
	printf("%d la so chan \n",so_nguyen);
	else
	printf("%d la so le \n",so_nguyen);
}
