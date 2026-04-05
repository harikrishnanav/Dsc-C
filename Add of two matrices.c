//harikrishnan av
//International school of photonics 
#include<stdio.h>
int main()

{
  int a[100][100],i,j,m,n,r[100][100],c,d,s[100][100];
  printf("enter row size and column size of the first matrix");
  scanf("%d%d",&m,&n);
  printf("enter matrix elements");
  for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
       {
         scanf("%d",&a[i][j]);
       }
     }
  for(i=0;i<m;i++)
     {
      for(j=0;j<n;j++)
       {
         printf("%d\t",a[i][j]);
       }
     printf("\n");
     }  
  printf("enter row size and column size of the second matrix");
  scanf("%d%d",&c,&d);
  printf("enter matrix elements");
  for(i=0;i<c;i++)
     {
      for(j=0;j<d;j++)
       {
         scanf("%d",&r[i][j]);
       }
     }
  for(i=0;i<c;i++)
     {
      for(j=0;j<d;j++)
       {
         printf("%d\t",r[i][j]);
       }
     printf("\n");
     }  
  if(m==c && n==d)
    { 
      for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
          {
           s[i][j]=a[i][j]+r[i][j];
          }
        }
    } 
  else
     {
       printf("matrix addition is not possible between these two matrices");
     }
  printf("Sum of matrices:\n");
    for(i=0;i<m;i++) 
      {
       for(j=0;j<n;j++)
         {
          printf("%d\t",s[i][j]);
         }
        printf("\n");
    }
  return 0;
}