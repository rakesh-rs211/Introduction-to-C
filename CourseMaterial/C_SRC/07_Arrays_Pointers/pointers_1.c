#include <stdio.h>
int main(){
	int *ptr; // Declare a pointer to int datatype;
	ptr = (int*)NULL;
	int a = 5; //Create a variable 'a' an intial to 5
	printf("Address of ptr after declaration %p\n",ptr);
	printf("Memory address of \'a\': %p\n", &a);
	ptr = &a;
	printf("The pointer \'ptr\' points to memory address %p \nand has the value %d\n", ptr,*ptr);
	return 0;
}
