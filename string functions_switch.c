//Harikrishnan A V
//International school of photonics 
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100], b[100];
    int choice;
    int l;
    

    printf("String operations\n");
    printf("1. Find length\n");
    printf("2. Copy string\n");
    printf("3. Concatenate strings\n");
    printf("4. Compare two strings\n");

    scanf("%d", &choice);
    getchar();

    switch(choice)
    {
        case 1:
            printf("Enter the string: ");
            scanf("%[^\n]s",a);
            
            l = strlen(a);
            
            printf("Length of the string is %d", l);
            break;
        case 2:
            printf("Enter the string: ");
            scanf("%[^\n]s",a);
            
            strcpy(b,a);
            
            printf("Copied string: %s",b);
            break;
        case 3:
            printf("Enter first string: ");
            scanf("%s", a);

            printf("Enter second string: ");
            scanf("%s", b);

            strcat(a, b);

            printf("The concatenated string is %s\n", a);
            break;

        case 4:
            printf("Enter first string: ");
            scanf("%s", a);

            printf("Enter second string: ");
            scanf("%s", b);

            if(strcmp(a, b) == 0)
                printf("Both strings are equal\n");
            else
                printf("Both strings are not equal\n");

            break;
        default:printf("invalid choice\n");
            break;
    }
  return 0;
}