#include<stdio.h>
#include<stdlib.h>
void sum(int a,int b){printf("sum = %d\n",a+b);}
void sub(int a,int b){printf("sub = %d",a-b);}
void multi(int a,int b){printf("multiplication = %d",a*b);}
void division(int a,int b){printf("division = %d",a/b);}
void main()
{
    int ch,a,b;
    void (*fptr[5])(int,int)={sum,sub,multi,division};
    // while(1)
    // {
        printf("\n0. addtion\n1. subtraction\n2. Multiplication\n3. division\n4.Exit\n");
        printf("please enter a choice number: ");scanf("%d",&ch);
        printf("Enter two intergers for mathmatical operations: ");scanf("%d%d",&a,&b);
   
    //     switch(ch)
    //     {
    //         case 0:sum(a,b);break;
    //         case 1:sub(a,b);break;
    //         case 2:multi(a,b);break;
    //         case 3:division(a,b);break;
    //         case 4:exit(0);
    //         default:printf("please enter valid choice");
    //     }
    //     if(ch == 4)
    //         break;
    // }
    
    (*fptr[ch])(a,b);
    
}