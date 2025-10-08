#include <stdio.h>
#include <math.h>
int main(){
	int a, b;
	printf("Nhap vao so nguyen duong a:");
	scanf("%d", &a);
	printf("\nNhap vap so nguyen duong b: ");
	scanf("%d", &b);
	double S = (double)(sqrt(a+sqrt(b+1))) + (double)(sqrt(b+sqrt(a * a + b* b)));
	printf("Ket qua cua phep toan S la: %.2lf", S);

	return 0;
}
