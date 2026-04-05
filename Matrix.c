// Harikrishnan AV
//International school of photonics
#include<stdio.h>
int main()
{
  int a[50][50],i,j,m,n;
  
  printf("enter row size and column size: ");
  scanf("%d%d",&m,&n);
  
  printf("enter matrix elements");
  for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
       {
         scanf("%d",&a[i][j]);
       }
     }
    
    printf("Matrix:\n");

  for(i=0;i<m;i++)
     {
       for(j=0;j<n;j++)
        {
          printf("%d\t",a[i][j]);
        }
        printf("\n");
     }

    return 0;
}