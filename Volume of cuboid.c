// Harikrishnan A V
//International school of photonics 
#include <stdio.h>

int main()
{
    float l,w,h,volume;

    printf("Enter length,width,height: ");
    scanf("%f%f%f",&l,&w,&h);

    volume = l * w * h;

    printf("Volume = %.2f",volume);

    return 0;
}