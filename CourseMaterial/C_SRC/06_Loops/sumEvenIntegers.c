#include <stdio.h>
int main(int argc, char **argv){
	int i,sum;
	int N=100;
	for(i=1,sum=0;i<=N;i++){
		if(i%2 == 1) continue; //Skip odd numbers
		sum += i;
	}
	printf("The sum of even integers between [1,%d]: %d \n",N,sum);
	return 0;
}
