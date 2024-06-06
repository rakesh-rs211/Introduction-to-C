#include <stdio.h>
/* Static Members */
int justaCall(void){
	static int counter=0;
	counter++;
	return counter;
}

int main(){
	int nCalls;
	nCalls=justaCall();
	printf("Number of function calls :%d\n",nCalls);
	for(int i=0;i<100;i++){
		nCalls=justaCall();
	}
	printf("Number of function calls :%d\n",nCalls);
	return 0;
}
