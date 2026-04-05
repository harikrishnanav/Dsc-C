//Harikrishnan A V
//International school of photonics 
#include <stdio.h>
struct book
{
    char title[50];
    char author[50];
    int pages;
    float price;
};
int main()
{
   int n,i;
   struct book b[100];
   printf("enter the limit\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   printf("enter details of book\n");
   scanf("%s%s%d%f",b[i].title,b[i].author,&b[i].pages,&b[i].price);
   }
   for(i=0;i<n;i++)
   {
   printf("Details of book are\n");
   printf("Title: %s\nAuthor: %s\nPages: %d\nPrice: %f\n",b[i].title,b[i].author,b[i].pages,b[i].price);
   }
   return 0;
}