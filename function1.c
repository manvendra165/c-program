#include<stdio.h>
float division(float,float);
float multiply(float,float);
float main(float argc, char const *argv[])
{
    /* code */
    float num1,num2,q,Div,mul1,mul2,mul;
    printf("enter the dividend\n");
    scanf("%f",&num1);
     printf("enter the divisor\n");
    scanf("%f",&num2);
    Div=division(num1,num2);
     printf("quotient is %f\n",Div);

   
     printf("\n enter the mul1\n");
    scanf("%f",&mul1);
     printf("enter the mul2\n");
    scanf("%f",&mul2);
    mul=multiply(mul1,mul2);
    printf("multiplication is %f",mul);

    return 0;
}
float division(float x,float y)
{
    return(x/y);
}
float multiply(float m,float n)
{
    return(m*n);
}
