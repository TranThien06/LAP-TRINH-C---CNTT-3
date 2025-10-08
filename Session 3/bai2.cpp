#include <stdio.h>
int main(){
	double Celsius;
	printf("Moi ban nhap Celsius: ");
	scanf("%lf", &Celsius);
	double Fahrenheit;
	Fahrenheit = Celsius * 9/5 + 32;
	printf("Nhiet do tu do Celsius sang do Fahrenheit %.2lf", Fahrenheit);
	
	return 0;
}
