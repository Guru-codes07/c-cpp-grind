#include<stdio.h>
#include<strings.h>
int main(void)
{
    char greeting[20] = "Guru";
    char name[] = "Prasad";
    char letters[6] = {'A','B','C','D','E','F'};
    printf("Basic Strings: \n");
    printf("greeting = %s\n", greeting);
    printf("name     = %s\n", name);
    printf("letters  = %s\n", letters);

    // The NULL terminator
    printf("\n=== Null terminator ===\n");
    printf("name has %zu usable chars + 1 null terminator = %zu bytes total\n",strlen(name), sizeof(name));

    // common strings.h functions
    printf("strlen: \n");
    printf("strlen(greeting) = %zu\n", strlen(greeting));

    printf("strcpy / strncpy : \n");
    char copy[20];
    strcpy(copy, greeting);
    printf("copy = %s\n", copy);

    printf("strcat : \n");
    strcat(greeting, " ");
    strcat(greeting, name);
    printf("greeting after strcat = %s\n", greeting);

    printf("Reading input: \n");
    char buffer[50];
    printf("Enter a word: ");
    scanf("%49s", buffer);  /* limit chars read to avoid buffer overflow */
    printf("You entered: %s\n", buffer);

    return 0;

}