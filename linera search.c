#include <stdio.h>

int main() {
    int arr[100], n, i, key, found = 0;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);


    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the number to search: ");
    scanf("%d", &key);

    
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Number found at position %d (index %d)\n", i + 1, i);
            found = 1;
            break;
        }
    }

    if(found==0) {
        printf("Number not found in the array.\n");
    }

    
}

