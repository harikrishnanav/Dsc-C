// Harikrishnan A V
//International school of photonics 
#include <stdio.h>

int main()
{
    int a,b;

    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %.2f",
    a+b,a-b,a*b,(float)a/b);

    return 0;
}