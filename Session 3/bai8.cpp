#include <stdio.h>
int main(){
	int number;
	printf("Hay nhap vao so nguyen co 4 chu so: ");
	scanf("%d", &number);
	int n1, n2, n3, n4;
	n1 = number % 10;
	n2 = (number / 10) % 10;
	n3 = (number /100) % 10;
	n4 = (number /1000) % 10;
	
	int result = n1 * 1000 + n2 *100 + n3 * 10 + n4;
	printf("So nghich dao la: %d", result);
	
	 
	
	return 0;
}
