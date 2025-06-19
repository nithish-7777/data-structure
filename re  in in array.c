#include <stdio.h>

int main() {
    int regNos[100], n, i, search, found = 0;

    // Input number of registration numbers
    printf("Enter the number of registration numbers: ");
    scanf("%d", &n);

    // Input registration numbers
    printf("Enter %d registration numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &regNos[i]);
    }

    // Input registration number to search
    printf("Enter registration number to search: ");
    scanf("%d", &search);

    // Search for the registration number
    for(i = 0; i < n; i++) {
        if(regNos[i] == search) {
            found = 1;
            break;
        }
    }

    // Output result
    if(found)
        printf("Registration number %d found at position %d.\n", search, i + 1);
    else
        printf("Registration number %d not found.\n", search);

    return 0;
}

