#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);  // unsafe, use fgets instead in real applications

    if (strlen(str) == 0)
        printf("Invalid string (empty).\n");
    else
        printf("Valid string.\n");

    return 0;
}

