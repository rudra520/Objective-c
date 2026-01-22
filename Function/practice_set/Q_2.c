#include<stdio.h>

float c2f(float);

float c2f(float c){
    return ((9*c)/5)+32;




}

int main(){
float c = 9;
printf(" celsius into %fis %.2f Fahrenheit",c,  c2f(c) );

    return 0;

}