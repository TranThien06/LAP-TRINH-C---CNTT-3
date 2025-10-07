#include <stdio.h>
int main(){
	int a = 3;
	int b =6;
	float c = 3.6;
	// tong cua 3 so
	double sum = a + b + c;
	printf ("Ket qua la %.2f", sum); 
	// tong phan nguyen
	double sum1 = a + b + (int)c;
	printf ("\nKet qua la %.2f", sum1); 
	return 0;
}
