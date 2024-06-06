#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int main(){
	int **Arr2D;
	int *ptr_Arr;
	int nrow=10000, ncol=100000;
	clock_t start_t,end_t;
	ptr_Arr = malloc(nrow*ncol*sizeof(int));
	for(int i=0;i<ncol*nrow;i++){
		ptr_Arr[i] = i;
	}
	Arr2D = malloc(nrow*sizeof(int*));
	
	for(int irow=0;irow<nrow;irow++){
		Arr2D[irow] = &(ptr_Arr[irow*ncol]);
	}
	start_t = clock();
	for(int irow=0;irow<nrow;irow++){
		for(int icol=0;icol<ncol;icol++){
			Arr2D[irow][icol] *= 2;
		}
	}	
	end_t = clock();
	free(ptr_Arr);
	free(Arr2D);
	printf("Time taken: %le\n",(double)(end_t-start_t)/CLOCKS_PER_SEC);
	return 0;
}
