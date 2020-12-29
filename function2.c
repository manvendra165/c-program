#include<stdio.h>
int addition(int,int);
int subtraction(int,int);
int main(int argc, char const *argv[])
{
    /* code */
    int num1,num2,add,sub;
    printf("enter the num1 :");
    scanf("%d",&num1);
     printf("enter the num2 :");
    scanf("%d",&num2);
    add=addition(num1,num2);
    printf("the sum of two number is %d",add);
     sub=subtraction(num1,num2);
    printf("\nthe subtraction of two number is %d",sub);

    return 0;
}
int addition(int x,int y)
{
    return(x+y);
}
int subtraction(int m,int n)
{
    return(m-n);
}
