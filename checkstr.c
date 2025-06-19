#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int valid = 1;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i])) {
            valid = 0;
            break;
        }
    }

    if (valid)
        printf("Valid string (only alphabets).\n");
    else
        printf("Invalid string (contains non-alphabet characters).\n");

    return 0;
}

