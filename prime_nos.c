#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int n,i,value;
    printf("enter a no to find whether it is prime or not\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            value=1;
            break;
        }
    }
        if(n==1)
        {
            printf("1 is neither prime no. nor composite no.");
        }
        else
        {
            if(value==1)
            {
                printf("%d is not prime number",n);

            }
            else
            {
                printf("%d is prime number",n);
            }
        }
    

    return 0;
}
