#include <stdio.h>
int main(){
	int number;
	printf("Hay nhap vao so nguyen co 4 chu so: ");
	scanf("%d", &number);
	int n1, n2, n3, n4, n5;
	n5 = number % 10;
	n4 = (number / 10) % 10;
	n3 = (number /100) % 10;
	n2 = (number /1000) % 10;
	n1 = (number /10000) % 10;
	int sum;
	sum = n1 + n2 + n3 + n4 + n5;
	printf("Tong cac chu so da nhap la: %d", sum); 
	
	return 0;
}
