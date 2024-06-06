#include <stdio.h>
#include <stdbool.h>
int main(){
	printf("  Size of the datatypes\n");
	printf("-------------------------\n");
	printf("int \t\t: %2d bytes\n", (int) sizeof(unsigned int));
	printf("short int \t: %2d bytes\n", (int) sizeof(short int));
	printf("long \t\t: %2d bytes \n", (int) sizeof(long));	
	printf("long long \t: %2d bytes \n", (int) sizeof(long long));
	printf("float \t\t: %2d bytes \n", (int) sizeof(float));
	printf("double \t\t: %2d bytes \n", (int) sizeof(double));	
	printf("long double \t: %2d bytes \n", (int) sizeof(long double));
	printf("char \t\t: %2d bytes \n", (int) sizeof(char));
	printf("boolean \t: %2d bytes \n", (int) sizeof(bool));
	return 0;
}

