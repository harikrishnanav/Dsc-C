// Harikrishnan A V
//International school of photonics 
#include <stdio.h>

int main()
{
    int a,b,c;
    float avg;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    avg = (a + b + c)/ 3.0;

    printf("Average = %.2f",avg);

    return 0;
}
