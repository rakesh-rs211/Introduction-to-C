#include<stdio.h>
void swap_byvalue(int a, int b){
  // This doesn't work
  int tmp;
  tmp = a;
  a = b; 
  b=tmp;
}

void swap_byref(int* ptr_a, int* ptr_b){
  int tmp;
  tmp = *ptr_a;
  *ptr_a = *ptr_b;
  *ptr_b = tmp;
}

int main()
{
  int a = 2, b = 100;

  printf(" The intial value of a is %i and b is %i", a , b);
  swap_byvalue(a,b);
  printf(" After calling swap_byvalue value of a is %i and b is %i", a , b);

  swap_byref(&a,&b);
  printf(" After calling swap_byref value of a is %i and b is %i", a , b);
  return 0;
}
