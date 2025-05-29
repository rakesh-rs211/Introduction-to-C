#include <stdio.h>

int main(int argc, char **argv){
	int i,sum;
	int N=100;
	for(i=1,sum=0;i<=N;i++){
		sum += i;
	}
	printf("The sum of first N integer: %d \n",sum);
	return 0;
}
