#include <stdio.h>
void main()
{
	int i;
	for (i = 1; i <= 10; i++)
		printf("\nSquarer of %d is %d", i, squarer(i));
}
int squarer(int x)
{
	int j;
	j = x * x;
	return(j);

}