#include <stdio.h>

// Function prototype
int sum(int , int  );

//Function definition
int sum(int x , int y){
    printf("The sum is %d\n", x+y );
    return x+y;
}


int main()
{
    int a = 19;
    int b = 20;

   int c = a + b ;
   printf("The sum is %d\n" , c);
   sum(a,b); //Function call

    int a1 = 22;
    int b1 = 33;

   int c1 = a1 + b1 ;
   printf("The sum is %d\n" , c1 );
sum(a1,b1);


    return 0;


}