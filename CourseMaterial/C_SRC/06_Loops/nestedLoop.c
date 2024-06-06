#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
	int i,j,sum,N;
	for(j=1;j<argc;j++){
		N = atoi(argv[j]);
		for(i=1,sum=0;i<=N;i++){
			sum += i;
		}
		printf("The sum of integer between [1, %d]: %d\n",N, sum);
	}
	return 0;
}
