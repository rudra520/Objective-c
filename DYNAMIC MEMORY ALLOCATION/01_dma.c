#include <stdio.h>  
#include <stdlib.h>    
int main()
{
int n ;
int* ptr;
scanf("%d",&n);
ptr = (int*) malloc(n*sizeof(int));
//int arr[n]; // not allowed in c
ptr[0]=3;
ptr[1]=6;
free(ptr);
printf("%d",ptr[1]);
return 0;
}