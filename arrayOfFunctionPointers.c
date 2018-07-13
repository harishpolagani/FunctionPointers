#include<stdio.h>
#include<stdlib.h>

//function pointer declaration
int (*fptr[3])(int,int);

//declarations
int addition(int,int);
int subtraction(int,int);
int multiplication(int,int);





int main()
{

int val1=10,val2=20;
/*
//function poiter intialization
fptr[0]=addition;
fptr[1]=subtraction;
fptr[2]=multiplication;
*/
// or you can also use below syntax 
int (*fptr[3])(int,int)={addition,subtraction,multiplication};


while(1)
{


    int choice = 0;
    printf("enter 1.additon \n 2. subtraction \n 3. multiplication \n 4. exit \n ");
    scanf("%d",&choice);
    if(choice == 4 )
    {
        printf("thanks && exiting from the program \n ");
        exit(0);
    }
    else if(choice >3 && choice <1)
        printf("please enter proper choice\n");
    else if(fptr != NULL)
    {
        printf("result: %d \n",(* fptr[choice-1])(val1,val2));
    }
    else 
        printf("fp is null \n");
}


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
