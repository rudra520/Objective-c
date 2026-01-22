#include <stdio.h>   
int main()
{
    char ch;
 FILE *fptr;
    fptr = fopen("rudra.txt", "r");

while (1)
{
    ch = fgetc(fptr);
    printf("%c",ch);
    if(ch == EOF)
    {
        break;
    }









}


return 0;

}