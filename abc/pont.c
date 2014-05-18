#include <stdio.h>

int main(void)
{
	int x[5]={10,15,12,17,14};
	int *p;

	p = x;

	printf("  p:  %d \n", *p);
    printf("  p:  %d \n", *(p+1));
    printf("  p:  %d \n", *p);

    return 0;
}

