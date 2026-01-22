#include <stdio.h>
int factorial(int);


//Factorial(5) = 1 X 2 X 3 X 4 X 5
//Factorial(4) = 1 X 2 X 3 X 4 
//Factorial(3) = 1 X 2 X 3 
//Factorial(2) = 1 X 2 
//Factorial(n) = 1 X 2 X 3 X .... X n-1 X n
//Factorial(n-1) = 1 X 2 X ...... X n-1
int factorial(int n){
    if( n == 1 || n == 0){
        return 1;
    }
    //Factorial(n) = Factorial(n-1) X n
    return factorial(n-1) * n;
}

int main(){
    int a = 3;
    printf("The factorial of %d is %d" , a , factorial(a));
}