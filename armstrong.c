#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int n,num,sum=0,rem ,digit=0;
    printf("enter the number :");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
        digit++;

    }
    if(sum==num)
    {
        printf("the given number %d is armstrong",num);
        printf("\nthe no of digit in this number is %d", digit);
    }
    else
    {
                printf("the given number %d is  not armstrong",num);
                        printf("\nthe no of digit in this number is %d", digit);


    }

    return 0;
}
