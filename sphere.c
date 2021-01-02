#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    /* code */
    
    float pi=3.14,r,volume;
    printf("enter the radius of sphere :");
    scanf("%f",&r);
    volume=((4.0/3.0)*(r*r*r)*pi);
    printf("\n the volume of sphere is %f",volume);

    return 0;
}
