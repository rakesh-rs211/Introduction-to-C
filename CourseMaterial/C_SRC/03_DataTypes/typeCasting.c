#include <stdio.h>
int main()
{
	int a = 3;
	int b = 2;
	float c,d;
	c = a/b;
	d = (float)a/b;
	printf("Division without casting: %f\n",c);
	printf("Division with casting: %f\n",d);
	return 0;
}
