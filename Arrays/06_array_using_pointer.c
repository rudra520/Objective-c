#include <stdio.h>   
int main()
{
    int marks [ ]= {12,34 ,53,66};
   // int*ptr =&marks[0];
   //same as above
   int * ptr =marks;
  for (int i =0; i<4;i++)
  {
    printf("The marks at index %d is %d\n ",i,*ptr);
    ptr++;
   // printf("The marks at index %d is %d\n",i,marks[i]);
  }                             


                         



return 0;
}