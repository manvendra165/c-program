#include<stdio.h>
int fact(int);
int main(int argc, char const *argv[])
{
    /* code */
    int n,result;
    printf("enter the no. to get the factorial :");
    scanf("%d",&n);
    result=fact(n);
    printf("the factorial of the number is %d",result);
    return 0;
}
int fact(int n)
{
    if(n<1)
    return 1;
    return n*fact(n-1);
}
