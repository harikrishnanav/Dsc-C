//Harikrishnan AV
//International school of photonics 
#include <stdio.h>

int main() 
{
    float a,b,result;
    char o;

    float *p1 = &a;
    float *p2 = &b;

    printf("Enter two numbers: ");
    scanf("%f %f", p1, p2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &o);

    switch(o)
       {
        case '+':
            result = *p1 + *p2;
            break;
        case '-':
            result = *p1 - *p2;
            break;
        case '*':
            result = (*p1) * (*p2);
            break;
        case '/':
            result = (*p1) / (*p2);
            break;
        default:
            printf("Invalid operator");
            
       }

    printf("Result = %.2f\n", result);
    return 0;
}