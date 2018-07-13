#include<stdio.h>

//function declarations
int addition(int,int);

//Global declarations
int (*fptr)(int,int);

int main()
{
fptr = addition;
if(fptr != NULL )
    printf("result: %d \n",(*fptr)(10,20));
    //printf("result: %d \n",fptr(10,20));
else
   printf("function pointer is NULL \n");

return 0;
}

int addition(int val1,int val2)
{
return val1+val2;
}
