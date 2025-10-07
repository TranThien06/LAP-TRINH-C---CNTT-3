#include <stdio.h>
#include <math.h>
int main(){
	int a = 25;
	int b = 4;
	int c = 6;
	double A;
	A = a * a * a + b * b + 2*a*c + sqrt(a+b-c);
	printf("Ket qua cua phep tinh A la: %.2f", A);
	return 0;
}
