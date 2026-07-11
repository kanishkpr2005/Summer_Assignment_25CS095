#include<stdio.h>
int main()
{
    char name[50];
    int m1,m2,m3,total;
    float per;
    printf("Enter Student Name: ");
    scanf("%s",name);
    printf("Enter Marks of 3 Subjects: ");
    scanf("%d%d%d",&m1,&m2,&m3);
    total = m1 + m2 + m3;
    per = total / 3.0;

    printf("\n------Marksheet------\n");
    printf("Name       : %s\n",name);
    printf("Total      : %d\n",total);
    printf("Percentage : %.2f\n",per);

    if(per>=90)
        printf("Grade : A+");
    else if(per>=75)
        printf("Grade : A");
    else if(per>=60)
        printf("Grade : B");
    else if(per>=40)
        printf("Grade : C");
    else
        printf("Grade : Fail");

    return 0;
}