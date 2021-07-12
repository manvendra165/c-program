#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int a=0,b=1,term,num,i;
    printf("enter the no of terms up to which u want fibonacci series :");
    scanf("%d",&term);
    for(i=1;i<=100;i++)
    {
        printf(" %d",a);
        num=a+b;
        a=b;
        b=num;
    }

    return 0;
}
