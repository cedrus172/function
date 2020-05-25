#include <stdio.h>
void main()
{
	int a,b;
	printf("Nhap so a : ");
	scanf("%d", &a);
	printf("\nNhap so b : ");
	scanf("%d", &b);
	printf("Tong 2 so la : %d", tinhtong(a, b));

}
int tinhtong(int x, int y)
{
	return (x + y);
}