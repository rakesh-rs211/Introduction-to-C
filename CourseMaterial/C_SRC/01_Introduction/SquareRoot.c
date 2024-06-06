#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char **argv)
{
	float num,sqrt_num;
	num = atof(argv[1]);	
	sqrt_num=sqrt(num);	
	fprintf(stdout, "The square root of %f is %f \n", num, sqrt_num);
	
	return 0;
}
