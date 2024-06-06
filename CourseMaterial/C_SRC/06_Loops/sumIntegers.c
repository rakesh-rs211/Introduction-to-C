#include <stdio.h>
#define N 100
int main(int argc, char **argv){
	int i,sum;
	for(i=1,sum=0;i<=N;i++){
		sum += i;
	}
	printf("The sum of first N integer: %d \n",sum);
	return 0;
}
