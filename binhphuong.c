#include<stdio.h>
int main()
{
	int n;
	printf("Nhap so : ");
	scanf("%d", &n);
	printf("Binh phuong cua so %d la %d", n, binhphuong(n));
	return 0;
}
binhphuong(int x)
{
	return (x * x);
}