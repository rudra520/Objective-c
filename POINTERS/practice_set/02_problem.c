#include <stdio.h>   

int returnig_5(int *ptr){
    printf("The value at ptr is %d\n",ptr);
     printf("The value at ptr is %d\n",*ptr);
    return 5;

}



int main(){

int i =2;
int * ptr = &i;
printf("The address of i is %u\n",&i);
returnig_5(ptr);
return 0;
}