// Harikrishnan A V
//International school of photonics 
#include <stdio.h>

int main()
{
    float length,breadth,area;

    printf("Enter length and breadth: ");
    scanf("%f%f",&length,&breadth);

    area = length * breadth;

    printf("Area = %.2f",area);

    return 0;
}