//Harikrishnan A V
//International school of photonics 
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int choice;
    int l;

    do
    {
        printf("\nString operations\n");
        printf("1. Find length\n");
        printf("2. Copy string\n");
        printf("3. Concatenate strings\n");
        printf("4. Compare two strings\n");
        printf("5. Exit\n");

        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("Enter the string: ");
            scanf("%s", a);

            l = strlen(a);
            printf("Length of the string is %d\n", l);
        }

        else if(choice == 2)
        {
            printf("Enter the string: ");
            scanf("%s", a);

            strcpy(b, a);
            printf("Copied string is %s\n", b);
        }

        else if(choice == 3)
        {
            printf("Enter first string: ");
            scanf("%s", a);

            printf("Enter second string: ");
            scanf("%s", b);

            strcat(a, b);
            printf("The concatenated string is %s\n", a);
        }

        else if(choice == 4)
        {
            printf("Enter first string: ");
            scanf("%s", a);

            printf("Enter second string: ");
            scanf("%s", b);

            if(strcmp(a, b) == 0)
                printf("Both strings are equal\n");
            else
                printf("Both strings are not equal\n");
        }

        else if(choice == 5)
        {
            printf("Exiting program...\n");
        }

        else
        {
            printf("Invalid choice\n");
        }

    } while(choice != 5);

    return 0;
}