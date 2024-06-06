#include <stdio.h>
int main(){
	int i = 10;	
	printf("Value of variable-i outside the inner code block: %d \n",i);
	{
		int i = 32;
		printf("Value of variable-i inside the inner code block: %d \n",i);
	}
	printf("Value of variable-i after the code block: %d \n",i);
	return 0;
}
