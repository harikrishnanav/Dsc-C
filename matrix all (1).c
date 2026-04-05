#include<stdio.h>
int main()
{
  int a[100][100],i,j,m,n,sum;
  printf("enter row size and column size");
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
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
       {
         if(i==j)
         {
           sum += a[i][i];
           printf("%d\t",a[i][i]);
         }
      }
    }
    printf("\nSum of diagonal elements of matrix = %d",sum);
    printf("\nupper triangular elements");
  for(i=0;i<n;i++)
     {
       for(j=0;j<n;j++) 
        {
          if(i<j)        
              printf("%d",a[i][j]);
        }
        printf("\n");
     }
     printf("\nlower triagular elements");
  for(i=0;i<n;i++) 
     {
       for(j=0;j<n;j++) 
         {
           if(i>j)        
               printf("%d",a[i][j]);
         }
        printf("\n");
     }
  return(0);
}