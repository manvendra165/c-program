#include<stdio.h>
#include<conio.h>
 int main(int argc, char const *argv[])

 
 {
     
     int i,n,sum=0;
     printf("enter the no.:");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         sum=sum+i;
        
     }
      printf("the sum of %d is %d:",n,sum);
     return 0;
 }