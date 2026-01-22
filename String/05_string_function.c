#include <stdio.h>   
#include <string.h>

int main()
{
char st[] = "Harry";
//printf("%d",strlen(st));
char s1[56]="harry";
char s2[56]="bhai";

char target[30];
strcpy(target,st);

strcat(s1 ,s2);
printf("%s",s1);

int a = strcmp("deep","joke");
printf("%d",a);
return 0;
}