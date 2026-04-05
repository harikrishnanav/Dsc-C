//Harikrishnan AV
//International school of photonics
#include <stdio.h>
void matrixDiff(int a[10][10],int b[10][10],int r,int c)
{
    int i,j,diff[10][10];

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            diff[i][j]=a[i][j] - b[i][j];
        }
    }

    printf("Difference of matrices:\n");
    for(i =0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",diff[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[10][10],b[10][10];
    int r,c,i,j;

    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    printf("Enter elements of first matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    matrixDiff(a,b,r,c);

    return 0;
}