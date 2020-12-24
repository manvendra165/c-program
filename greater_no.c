          #include<stdio.h>

           int main(int argc, char const *argv[])
    {
             /* code */
             int A,B,C;
             printf("enter the three nos. :");
             scanf("%d %d %d",&A,&B,&C);
    if(A>B && A>C)
             printf("A is greater");
             else if(B>A && B>C)
             printf("B is greater");
    else
            printf("Cis greater");


    return 0;
}
