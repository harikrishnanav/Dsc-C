//Harikrishnan AV
//International school of photonics
#include <stdio.h>
int num;  
int rev;   
int s;     
void reverse();   // function declaration
void sum();       // function declaration
int main()
{
    printf("Enter a three digit number: ");
    scanf("%d", &num);

    reverse();   // function call
    sum();       // function call

    printf("Reversed number = %d\n", rev);
    printf("Sum of digits = %d\n", s);

    return 0;
}
void reverse()  //function definition 
{
    int temp = num;
    rev = 0;

    while (temp > 0) 
    {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;
    }
}

void sum() 
{
    int temp = num;
    s = 0;

    while (temp > 0) 
    {
        s = s + (temp % 10);
        temp = temp / 10;
    }
}
