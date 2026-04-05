// Harikrishnan AV
//International school of photonics
#include <stdio.h>

int main()
{
    int a[50][50],m,n,i,j,rowSum,colSum;
    
    printf("enter row size and column size: ");
    scanf("%d%d",&m,&n);

    printf("Enter elements:\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<m;i++)
    {
        rowSum = 0;
        for(j=0;j<n;j++)
            rowSum += a[i][j];

        printf("Row %d sum = %d\n",i+1,rowSum);
    }

    
    for(j=0;j<m;j++)
    {
        colSum = 0;
        for(i=0;i<n;i++)
            colSum += a[i][j];

        printf("Column %d sum = %d\n", j+1, colSum);
    }

    return 0;
}