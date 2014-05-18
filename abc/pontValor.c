#include <stdio.h>

int main(void)
{
	int x;
	int *i;

	x=23;
	i=&x;
	*i=19;

	printf("x = %d",x);
	return 0;
}
