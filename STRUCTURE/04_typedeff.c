#include <stdio.h>   
#include <string.h>   
typedef struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}Emp; // semicolon is imp


int main()
{
//typedef int harry;
//harry a= 99;
//printf("the value of a is %d\n",a);

Emp e1;
e1.code = 4511;
strcpy(e1.name , "harry");
e1.salary = 54.44;

printf("%d %f %s" , e1.code , e1.name , e1.salary);











return 0;
}