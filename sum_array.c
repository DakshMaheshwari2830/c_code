#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}