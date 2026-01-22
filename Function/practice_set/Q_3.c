#include <stdio.h>

int Force(int m);
int Force(int m){
float g =9.8;
    return m*g;
}
int main(){
      int m =10;
      printf("Force exerted by Earth %d",Force(m));
}
















