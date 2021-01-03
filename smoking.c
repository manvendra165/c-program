#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int choice,salary,profit,loss;
    printf("\n1.if employee smoke");
    printf("\n2. if employee does not smoke ");
    printf("n\n enter the choice");
    scanf("%d",&choice);
    switch (choice)
    {
    case /* constant-expression */1:printf("enter the salary\n");
    scanf("%d",&salary);
    if(salary<10000)
    {
        profit=salary/10;
        printf("profit is %d",profit);
    }
    if(salary>=10000){
    profit=(salary*15)/100;
     printf("profit is %d",profit);}
    
        /* code */
        break;
        case 2:printf("enter the salary\n");
         scanf("%d",&salary);
    if(salary<10000)
    {
        loss=salary/10;
         printf("loss is %d",loss);
    }
    if(salary>=10000)
    loss=(salary*15)/100;
     printf("loss is %d",loss);
     break;
    

    
    default:
        break;
    }




    return 0;
}