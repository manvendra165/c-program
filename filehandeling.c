#include<stdio.h>
#include<stdlib.h>
int main()
{ 
    int i,sum,per;
    struct data
    {
        char name[10];
        int physics,chemistry,maths,hindi,english;
    }s1;
    FILE *fp;
    fp=(fopen("student.txt","a"));
    if(fp==NULL)
    {
        printf("error!");
        exit(1);
    }
        printf("enter student name");
        scanf("%s",s1.name);
        printf("enter marks of physics");
        scanf("%d",&s1.physics);
        printf("enter marks of chemistry");
        scanf("%d",&s1.chemistry);
        printf("enter marks of maths");
        scanf("%d",&s1.maths);
        printf("enter marks of english");
        scanf("%d",&s1.english);
        printf("enter marks of hindi");
        scanf("%d",&s1.hindi);
        sum=s1.physics+s1.chemistry+s1.maths+s1.english+s1.hindi;
        per=sum/5;
        fprintf(fp,"\nName:%s \n physics:%d\nchemistry:%d\nmaths:%d\nenglish:%d\nhindi:%d\nsum:%d\nper:%d",s1.name,s1.physics,s1.chemistry,s1.maths,s1.english,s1.hindi,sum,per);
        fclose(fp);
        return 0;
}