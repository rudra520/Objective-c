#include <stdio.h>

int main(){
    int i =72;
    
    int *j = &i;  // j is a pointer ponting to i
    int k = 67;
    int* o=&k;
    printf("The address of i is %p\n",i); //p means poiter addres
    printf("The address of i is %i\n",j);   //u means unsined int
    printf("The address of i is %i\n",o);


    printf("The value at address j is %d\n" , j);
    printf("%d\n",*o );
     
    return 0;
    
}
/*
int main(){
    char i = 'A';
    //char* j = &i;
    
    printf("The address of i is %u\n", &i);
   // printf("The address of i is %u\n", j);
    printf(" The address of i is %u\n", *(&i));
}*/