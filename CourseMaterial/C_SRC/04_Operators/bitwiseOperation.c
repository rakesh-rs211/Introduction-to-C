#include <stdio.h>
int main(){
	int x = 5,y;
	// Binary representation of 5 = 0x00000101
	// Binary representation of 1 = 0x00000001
	y = x&1;
	printf("The 5&1: %d\n",y);
	return 0;
}
