#include <stdio.h>
int main (){
int i = 6;
int* j = &i;
int** k = &j;
printf("The address of i is %i\n", i);
printf("The address of i is %i\n", *j);
printf("The address of i is %i\n", *(&i));
printf("The address of i is %i\n", **(&j)) ;

    return 0;
}