#include<stdio.h>
#include<conio.h>
void main()
{
    /* code */
    int i,n;
    printf("enter the no up to which u want to print the nos:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf(" %d ", i);
    }
    getch();
}