#include <stdio.h>

// Function pass by value
void fn_byValue(int fnVar_a){
	fnVar_a = 5;
	return;
}
void fn_byReference(int *fnptr_a){
	*fnptr_a = 32;
	return;
}
int main(){
	int a = 10;
	fn_byValue(a);
	printf("The value of \'a\' after passing by value: %d\n",a);
	fn_byReference(&a);
	printf("The value of \'a\' after passing by value: %d\n",a);
	return 0;
}
