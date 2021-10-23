#include<iostream>
#include<math.h>
using namespace std;

// Binet's Formula for calculating nth Factorial
// Time complexity: O(1)

int fib(int n){
    float Phi= (1+sqrt(5))/2;
    float phi= (1-sqrt(5))/2;
    int fact=(1/sqrt(5))*(pow(Phi,n)-pow(phi,n));
    return fact;
}

int main(){
    int i=0;
    while(i!=10){
        cout<<fibo(i)<<" ";
        i++;
    }
    return 0;
}
