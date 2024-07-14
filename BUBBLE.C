#include <stdio.h>
int i;
int linearSearch(int arr[], int size, int target) {
    for (i = 0; i < size; i++) {
	if (arr[i] == target)
	    return i;
    }

    return -1; // Element not found
}

int main() {
    int result;
    int arr[] = {10, 23, 5, 15, 7, 32, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter the target number: ");
    scanf("%d", &target);

    result = linearSearch(arr, size, target);

    if (result != -1)
	printf("Element found at index %d.\n", result);
    else
	printf("Element not found.\n");

    return 0;
}
