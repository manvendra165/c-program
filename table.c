#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int i,j,n;
    printf("input upto the table number starting from 1 :  ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=n-1)
            printf("%dx%d = %d, ",j,i,j*i);
            else
            printf("%dx%d = %d ",j,i,j*i);

        }
        printf("\n");
    }
    return 0;
}
