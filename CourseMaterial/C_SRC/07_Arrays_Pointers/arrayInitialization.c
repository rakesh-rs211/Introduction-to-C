#include <stdio.h>
int main(){
	int arrA[6] = {0,1,2,3,4,5};
	int arrB[6];
	for(int i = 0; i<6; i++){
		arrB[i] = 7*i;
	}
	printf("Index \t ArrA \t ArrB\n");
	printf("------\t------\t------\n");
	for(int i=0; i<6;i++){
		printf("  %d \t  %d \t  %d\n",i,arrA[i],arrB[i]);
	}
	return 0;
}
