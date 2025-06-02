#include <iostream>

//extern "C" int addNum(int a, int b);
int addNum(int a, int b);

int main(){
        int a = 1; int b= 3;

        std::cout<<"Sum of two numbers is: "<<addNum(a,b)<<"\n";
        return 0;
}
