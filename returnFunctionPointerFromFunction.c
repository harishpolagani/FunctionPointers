#include<stdio.h>
#include<stdlib.h>

//function pointer declaration
typedef int (*fptr)(int,int);

//declarations
int addition(int,int);
int subtraction(int,int);
int multiplication(int,int);

fptr functionAllocator();

int main()
{

int val1=10,val2=20;

while(1)
{
    fptr fp = functionAllocator();

    if(fp != NULL)
    {
        printf("result: %d \n",fp(val1,val2));
    }
    else 
        printf("fp is null \n");
}


return 0;
}

fptr functionAllocator()
{
fptr fp =NULL;
int choice = 0;
printf("enter 1.additon \n 2. subtraction \n 3. multiplication \n 4. exit \n ");
scanf("%d",&choice);

switch(choice)
{
case 1: fp = addition;
        break;
case 2: fp = subtraction;
        break;
case 3: fp = multiplication;
        break;
case 4: printf("\n exiting from program \n ");
        exit(0);
        break;
default: printf("\n please enter proper input \n");
}

return fp;
}

int addition(int val1,int val2)
{
 return val1+val2;
}

int subtraction(int val1,int val2)
{
return val1 - val2;
}
int multiplication(int val1,int val2)
{
return val1*val2;
}
