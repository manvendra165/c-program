#include<stdio.h>
int displaynum(int);
int main(int argc, char const *argv[])
{
    
int n, result;
printf("enter the number up to which u want to display number :");
scanf("%d",&n);
result=displaynum(n);


    return 0;
}
int displaynum(int n)
{
  
    if(n<1)
    return 1;
      printf("%d\n",n);
    displaynum(n-1);
}

