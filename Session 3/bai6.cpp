#include <stdio.h>
int main(){
	double day;
	double chieuCao;
	printf("Do dai canh day la: ");
	scanf("%lf", &day);
	printf("Chieu cao cua tam giac la: ");
	scanf("%lf", &chieuCao);
	double dienTichTamGiac = 0.5 * day * chieuCao;
	printf("Dien tich hinh tam giac la: %.2lf", dienTichTamGiac);
	
	return 0;
}
