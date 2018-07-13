#include<stdio.h>
#include<stdlib.h>

//function pointer
typedef int (*fptr)(int,int);

//function declatations
int addition(int,int);
int subtraction(int,int);
int multiplication(int,int);

//structure with function pointer
typedef struct s1
{
int result;
fptr fp;
}str;

int main()
{

int val1=10,val2=20;
str *sptr = malloc(sizeof(str));
    int choice = 0;
while(1){  
    printf("enter 1.additon \n 2. subtraction \n 3. multiplication \n 4. exit \n ");
    scanf("%d",&choice);
    
    if(choice == 1)
        sptr->fp = &addition;
    else if(choice ==2)
        sptr->fp = &subtraction;
    else if(choice == 3)
        sptr->fp=&multiplication;
    else if(choice == 4 )
    {
        printf("thanks && exiting from the program \n ");
        exit(0);
    }
    else
    {
        printf("please enter proper choice\n");
        break;
     }


sptr->result = sptr->fp(10,20);

printf("result: %d \n ",sptr->result);
}//end of while

return 0;
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
