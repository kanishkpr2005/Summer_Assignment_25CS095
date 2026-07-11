#include<stdio.h>
int main()
{
    int score=0, ans;
    printf("Q1. Capital of India?\n");
    printf("1.Delhi  2.Mumbai  3.Kolkata\n");
    scanf("%d",&ans);
    if(ans==1)
        score++;

    printf("\nQ2. 5 + 7 = ?\n");
    printf("1.10  2.12  3.15\n");
    scanf("%d",&ans);
    if(ans==2)
        score++;
    printf("\nQ3. C language developed by?\n");
    printf("1.Dennis Ritchie 2.James Gosling 3.Bjarne\n");
    scanf("%d",&ans);

    if(ans==1)
        score++;

    printf("\nYour Score = %d/3",score);
    return 0;
}