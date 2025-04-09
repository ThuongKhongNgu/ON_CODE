#include <stdio.h>
int main() {
	char chuoi[100];
	printf("Ban hay nhap noi dung vao di: \n");
	gets(chuoi);
	int dem = 0;
	char a = chuoi[dem];
	while(a != '\0') {
		dem++;
		a = chuoi[dem];
	}
	printf("do dai chuoi la: %d\n", dem);
}
