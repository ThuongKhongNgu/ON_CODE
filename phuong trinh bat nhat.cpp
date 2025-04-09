#include<stdio.h> 
int main() {
	float bien_a;
	float bien_b;
	float nghiem;
	printf("Ban hay nhap bien a vao day: \n");	
	scanf("%f",&bien_a);
	printf("Ban hay nhap bien b vao day: \n");	
	scanf("%f",&bien_b);
	
// neu a va b = 0 thi pt vo so nghiem
if(bien_a == 0 && bien_b == 0 )
	printf("Phuong trinh vo so nghiem \n");
// neu a = 0 va b khac 0 thi pt vo nghiem
else if(bien_a == 0 && bien_b != 0 )
	printf("Phuong trinh vo nghiem \n");
// neu a va b khac khong thi nghiem se la -b/a
		else if(bien_a!= 0 && bien_b != 0 )
		{
			nghiem = (-bien_b/ bien_a);
				printf("Nghiem phuong trinh la: %0.2f\n",nghiem);	
	}
// neu a khac 0 va n = 0 thi nghiem pt se auto = 0 
		else if (bien_a!= 0 && bien_b == 0 )
 		{
			nghiem = ((bien_a * nghiem) + bien_b);
				printf("Nghiem phuong trinh la: %0.1f\n",nghiem);	
	}	
} 
