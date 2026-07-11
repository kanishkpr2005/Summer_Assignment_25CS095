#include<stdio.h>

int main()
{
    int x, n, i;
    long long ans = 1;

    printf("Enter base: ");
    scanf("%d", &x);

    printf("Enter power: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        ans = ans * x;
    }

    printf("Answer = %lld", ans);

    return 0;
}