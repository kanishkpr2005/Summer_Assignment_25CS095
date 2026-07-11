#include<stdio.h>
int palindrome(int n)
{
    int rev=0,temp=n;
    while(temp!=0)
    {
        rev=rev*10+temp%10;
        temp=temp/10;
    }

    if(rev==n)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(palindrome(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}