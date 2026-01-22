#include <stdio.h>   
int main()
{
  FILE *fptr;
    fptr = fopen("rudra.txt", "a");
    //char c =fgetc(fptr);
//printf("%c",c);
   fputc('c',fptr);
return 0;
}