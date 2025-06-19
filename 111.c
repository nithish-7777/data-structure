#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int valid = 1;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalnum(str[i])) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid string (alphanumeric).\n");
    else
        printf("Invalid string (contains symbols).\n");

    return 0;
}

