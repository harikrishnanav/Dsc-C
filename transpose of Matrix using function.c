//Harikrishnan A V
//International school of photonics 
#include <stdio.h>
void transpose(int a[10][10],int r,int c);   // Function declaration
int main()
{
    int a[10][10],r,c,i,j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d",&r,&c);

    printf("Enter the matrix elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    transpose(a,r,c);   // Function call
    return 0;
}
  void transpose(int a[10][10],int r,int c)   // Function definition
{
    int i,j;
    printf("Transpose of the matrix:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d",a[j][i]);
        }
        printf("\n");
    }
}