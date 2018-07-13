#include<stdio.h>
#include<stdlib.h>

//function pointer declaration

typedef int (*fptr)(int,int);


//function declarations

int addition(int,int);
int subtraction(int,int);
int multiplication(int,int);
int division(int,int);

int functionAllocator(fptr,int,int);



int main()
{

unsigned int val1=10,val2=20;
unsigned char choice=0;
unsigned int result=0;

while(1){
printf("enter the choice \n 1. addition \n 2.subtraction \n 3.multiplication \n 4.divison \n 5. exit \n:");
scanf("%d",&choice);

switch(choice)
{
case 1: result = functionAllocator(addition,val1,val2);
        break;
case 2: result = functionAllocator(subtraction,val1,val2);
        break;
case 3: result = functionAllocator(multiplication,val1,val2);
        break;
case 4: result = functionAllocator(division,val1,val2);
        break;
case 5: printf("thank you \n program is exited \n "); 
        exit(0);
        break;
default: printf("\n please enter a valid input \n ");
         break;
}

printf("result: %d \n ",result);
}
return 0;
}

int addition(int val1,int val2)
{
return val1+val2;
}

int subtraction(int val1,int val2)
{
return val1-val2;
}

int multiplication(int val1,int val2)
{
return val1*val2;
}

int division(int val1,int val2)
{
return val1/val2;
}

int functionAllocator(fptr fp,int val1,int val2)
{
return fp(val1,val2);
}
