//Harikrishnan A V
//International school of photonics
//function with argument and no returntype
#include<stdio.h>
void swap(int,int);
int main()
{
int a,b;
printf("enter a and b");
scanf("%d%d",&a,&b);
printf("\na is %d and b is %d",a,b);
swap(a,b);

return 0;
}
void swap(int a,int b)
{
int c=0;
c=a;
a=b;
b=c;
printf("\nthe new value \na is %d and b is %d",a,b);
}