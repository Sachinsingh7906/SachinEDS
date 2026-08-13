#include <stdio.h>

int main() {
    // Initialize an array with sample elements
    int arr[] = {12, 45, 2, 78, 34, 99, 15};
    
    // Calculate the total number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // Assume the first element is the largest initially
    int max = arr[0];
    
    // Loop through the array starting from the second element
    for (int i = 1; i < size; i++) {
        // If a larger element is found, update the max variable
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    // Print the largest element
    printf("The largest element in the array is: %d\n", max);
    
    return 0;
}
