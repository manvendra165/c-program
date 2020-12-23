#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int n;
    printf("enter an integer: ");
    scanf("%d",&n);
    if(n<0)
    printf("the given number i.e %d is negative number",n);
    else
        printf("the given number i.e %d is positive number",n);



    return 0;
}
