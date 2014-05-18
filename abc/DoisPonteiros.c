#include <stdio.h>

int main(void)
{
	int x;
	int *p1, *p2;
	x = 23;
	p1 = &x;

	p2 = p1;

	printf("p2:  %p valor: %d\n",p2, *p2);
	printf("p1:  %p valor: %d\n",p1, *p1);
	printf("&x:  %p valor: %d\n",&x, x);

	*p1 = 10;

	printf("p2:  %p valor: %d\n",p2, *p2);
	printf("p1:  %p valor: %d\n",p1, *p1);
	printf("&x:  %p valor: %d\n",&x, x);

	return 0;
}
