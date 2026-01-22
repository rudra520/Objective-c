#include <stdio.h>   

void change_to_thirty_times(int* a){
    *a = *a * 10;
    

}





int main()
{
    int x = 45;
    printf("the vlaue of x %d\n", x);
    change_to_thirty_times(&x);
 printf("The value of x is %d\n",x);
return 0;
}