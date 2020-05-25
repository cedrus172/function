#include <stdio.h>
void main()
{
	int number;
	printf("Nhap so nguyen : ");
	scanf("%d", &number);
	for (int i = 1; i <= number; i++)
		printf("\nSquarer of %d is %d", i, squarer(i));
}
squarer(int x)
{
	x = x + 5;
	return x;
}