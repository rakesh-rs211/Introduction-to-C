#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argv, char **argc){
	float a=2,b;
	b = sqrt(a);
	if( a == b*b){
		printf("The two numbers %f and %f are equal: \n",a,b*b);	
	}
	else{
		printf("The two numbers %f and %f are not equal: \n",a,b*b);	
	}
	printf("Difference = %8.3le \n",fabs(a-b*b));
	return 0;
}


