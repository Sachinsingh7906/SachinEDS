#include <stdio.h>

int main() {
    // 1. Define an array with example elements
    int arr[] = {5, 12, 7, 20, 3};
    
    // 2. Initialize the sum variable to 0
    int sum = 0;
    
    // 3. Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // 4. Loop through the array and accumulate the values
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Short for: sum = sum + arr[i]
    }
    
    // 5. Print the final result
    printf("Sum of all array elements: %d\n", sum);
    
    return 0;
}
