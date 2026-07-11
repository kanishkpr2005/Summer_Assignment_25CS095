#include<stdio.h>
int main()
{
    int a[10][10];
    int i,j,row,col,sum;
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&row,&col);
    printf("Enter matrix elements:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<col;j++)
    {
        sum=0;

        for(i=0;i<row;i++)
        {
            sum=sum+a[i][j];
        }

        printf("Sum of Column %d = %d\n",j+1,sum);
    }
    return 0;
}