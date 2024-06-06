#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *intArr,*dblArr; //Declare a pointer
	int N=1000;
	intArr = malloc(N*sizeof(int));
	for(int i=0;i<N;i++){
		intArr[i] = 0;
	}
	dblArr = malloc(N*sizeof(int));
	for(int i=0;i<N;i++){
		dblArr[i] = 0;
	}
	intArr[10] = 2;
	dblArr[10] = 3.14;
	free(dblArr);
	free(intArr);
	return 0;
}

