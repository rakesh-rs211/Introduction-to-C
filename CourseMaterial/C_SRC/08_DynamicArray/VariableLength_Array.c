#include<stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
        int n = atoi(argv[1]);

        // Declare an array by the input argument to the main function call
        int arr[n];

        //Initialize the array 
        for(int i=0; i<n; i++){
                arr[i] = i*i;
        }
        for(int i=0; i<n; i++){
           printf("%d, ",arr[i]]);
        }
        printf("\n");
        return 0;
}
