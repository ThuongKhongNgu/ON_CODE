#include<stdio.h> 
int main() {
	int a, b, c;
	printf("Ban hay nhap 1 so a vao di: \n");
	scanf("%d", &a);
	printf("Ban hay nhap 1 so b vao di: \n");
	scanf("%d", &b);
	c = a;
	a = b;
	b = c; 
	printf("Gia tri cua a la: %d\n",a);
	printf("Gia tri cua b la: %d\n",b);
} 
