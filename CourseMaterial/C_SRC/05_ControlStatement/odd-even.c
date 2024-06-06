#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if(argc>1 && atoi(argv[1])%2 == 0){
		printf("Its an even number\n");			
	}
	else if(argc>1 && atoi(argv[1])%2 == 1){
		printf("Its an odd number\n");			
	}
	else{
		printf("Usage:Enter an integer value \n");
		printf("e.g : ./odd-even 23\n");
	}
	return 0;
}
