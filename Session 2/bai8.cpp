#include <stdio.h>
int main (){
	int number = 12345;
	int result; 
	int d1,d2,d3,d4,d5;
	
	d1 = number % 10; //5
	d2 = (number / 10 ) % 10; //4
	d3 = (number /100) % 10; // 3
	d4 = (number / 1000) % 10; // 2
	d5 = (number /10000) % 10; //1
	
	result = d1*10000 + d2*1000+d3*100+d4*10+d5;
	printf("Ket qua sau khi dao nguoc la: %d", result);	
	return 0;
}
