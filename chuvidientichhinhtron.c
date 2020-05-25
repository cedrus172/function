#include<stdio.h>
#define PI 3.14159
int main()
{
	int r;
	printf("Nhap vao ban kinh hinh tron : ");
	scanf("%d", &r);
	chuvi(r);
	dientich(r);
	return 0;
}
float chuvi(int x)
{
	printf("Chu vi hinh tron la : %f", 2 * PI *x);
	return (2 * PI *x);
}
float dientich(int x)
{
	printf("\nDien tich hinh tron la : %f", PI*x*x);
	return (PI*x*x);
}