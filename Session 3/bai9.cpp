#include <stdio.h>
int main(){
	int n;
	printf("Nhap vao so nguyen duong > 1: ");
	scanf("%d", &n);
	double A;
	A = (double)1/((n - 1) * n) + (double)1/(n * (n+1)) + (double)1/((n+1) * (n+2));
	printf("Ket qua cua phep toan A la: %.5lf", A);
	
	
	return 0;
}
