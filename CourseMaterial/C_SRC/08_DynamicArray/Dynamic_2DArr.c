#include <stdlib.h>
int main(){
	int **Arr2D;
	int *ptr_Arr;
	int nrow=1000, ncol=1000;
	ptr_Arr = malloc(nrow*ncol*sizeof(int));
	for(int i=0;i<ncol*nrow;i++){
		ptr_Arr[i] = i;
	}
	Arr2D = malloc(nrow*sizeof(int));
	
	for(int irow=0;irow<nrow;irow++){
		Arr2D[irow] = &(ptr_Arr[irow*ncol]);
	}
	return 0;
}
