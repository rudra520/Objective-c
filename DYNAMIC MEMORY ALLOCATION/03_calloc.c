#include <stdio.h>  
#include <stdlib.h>    
int main()
{
int n  ;
int* ptr;
scanf("%d",&n);

ptr = (int*) calloc(n , sizeof(int));
//int arr[n]; // not allowed in c
ptr[0]=3;


printf("%.2f\n",ptr[0]);

free(ptr);

return 0;
}