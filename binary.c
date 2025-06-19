#include <stdio.h>  // Include standard input-output library

int main() {
    int arr[100], n, key, i;       // Declare variables: array, size, search key, and loop counter
    int low, high, mid;            // Declare binary search pointers

    // Step 1: Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);               // Read array size from user

    // Step 2: Input elements into the array (must be sorted for binary search)
    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);      // Read each element
    }

    // Step 3: Input the number to be searched
    printf("Enter the number to search: ");
    scanf("%d", &key);             // Read the target number (key)

    // Step 4: Initialize low and high for binary search
    low = 0;
    high = n - 1;

    // Step 5: Binary search loop
    while(low <= high) {
        mid = (low + high) / 2;    // Find the middle index

        if(arr[mid] == key) {      // If the middle element is the key
            printf("Number found at position %d (index %d)\n", mid + 1, mid);
            return 0;              // Exit the program
        } else if(arr[mid] < key) {
            low = mid + 1;         // Search in the right half
        } else {
            high = mid - 1;        // Search in the left half
        }
    }

    // Step 6: If not found
    printf("Number not found in the array.\n");

    return 0;
}

