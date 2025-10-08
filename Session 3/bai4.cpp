#include <stdio.h>
int main(){
	double diemToan, diemVan, diemAnh;
	printf("Hay nhap diem toan: ");
	scanf("%lf", &diemToan);
	printf("\nHay nhap diem Van: ");
	scanf("%lf", &diemVan);
	printf("\nHay nhap diem Anh: ");
	scanf("%lf", &diemAnh);
	double tongDiem = diemToan + diemVan + diemAnh;
	double diemTrungBinh = (diemToan + diemVan + diemAnh)/3;
	printf("\nTong diem la: %.2lf", tongDiem);
	printf("\nDiem trung binh la: %.2f", diemTrungBinh);
	
	return 0;
}
