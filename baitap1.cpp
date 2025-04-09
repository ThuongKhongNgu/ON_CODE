#include <stdio.h>
#include <stdlib.h>
char a[10];
int b;
float c;

int main() {
	printf("Nhap ho ten cua ban: ");
	gets(a);
	printf("Nhap tuoi hien tai cua ban:");
	scanf("%d", &b);
	printf("Nhap GPA cua ban:");
	scanf("%f", &c);
	if(b>18 || c>2.0)
	printf("Dau roi nha");
	else
	printf("rot");
}
