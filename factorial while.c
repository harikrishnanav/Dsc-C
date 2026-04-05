//Harikrishnan AV
//ISP
#include<stdio.h>
void main()
{
 int n,i,fact;
 fact=1;i=1;
 printf("enter an positive integer");
 scanf("%d",&n);
 while(i<=n)
    {
     fact *=i;
     i++;
    }
    printf("factorial is %d",fact);
}