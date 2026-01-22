#include <stdio.h>
int main()
{
   /* FILE *fptr;
    fptr = fopen("rudra.txt", "w"); // write mode completely clear your file then write which you wnat to write by program
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    */

        FILE *fptr;
    fptr = fopen("rudra.txt", "a"); // it dose not remove anything from your file  , it just add what you want to add
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);
    return 0;
}