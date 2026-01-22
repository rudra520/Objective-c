#include <stdio.h>  
#include <stdlib.h>    
int main()
{
float n  =5;
float* ptr;

ptr = (float*) malloc(n*sizeof(float));
//int arr[n]; // not allowed in c
ptr[0]=3;
ptr[1]=46;
ptr[2]=53;
ptr[3]=67;
ptr[4]=76;

printf("%.2f\n",ptr[0]);
printf("%.2f\n",ptr[1]);
printf("%.2f\n",ptr[2]);
printf("%.2f\n",ptr[3]);
printf("%.2f\n",ptr[4]);


return 0;
}
//melloc()