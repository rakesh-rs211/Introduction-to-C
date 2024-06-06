#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
	//char StrVar[50];
	/*printf("Enter a string: ");
	scanf("%s", StrVar); */	
	fprintf(stdout, "The string that you entered is: %s\n", argv[1]);
	
	return 0;
}
