#include <stdio.h>
#include <math.h>
int main (){
	int a = 3;
	int b = 4;
	int c = 2;
	double S;
	S = (sqrt(a * a+ b*b)/(c+1))+ (a*b/c)- (sqrt(fabs(a-b)+c*c));
	printf("Ket qua cua phep tinh S la: %.2f", S);
	
	return 0;
}
