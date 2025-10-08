#include <stdio.h>
#include <math.h>


int main(){
	double r;
	printf("Moi ban nhap ban kinh hinh tron: ");
	scanf("%lf", &r);
	double chu_vi = 2 * M_PI *r;
	double dien_tich = M_PI * r * r;
	printf("Chu vi hinh tron la: %.2lf", chu_vi);
	printf("\nDien tich hinh tron la: %.2lf", dien_tich);
	return 0;
}
