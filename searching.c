#include <stdio.h>
#include <stdlib.h>

// Linear Search Function
int linearSearch(int arr[], int n, int value)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == value)
        {
            printf("The value %d is found at index %d.\n", value, i);
            return i;
        }
    }
    printf("The value %d is not found in the array.\n", value);
    return -1;
}

// Binary Search Function (Array must be sorted)
int binarySearch(int arr[], int value, int n)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == value)
        {
            printf("The value %d is found at index %d.\n", value, mid);
            return mid;
        }
        if (arr[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("The value %d is not found in the array.\n", value);
    return -1;
}

int main()
{
    int value, n;

    // Input the size of the array
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));

    // Input the elements of the array
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter value of element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Print the array
    printf("Array elements are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Input the value to search
    printf("Enter the value to search: ");
    scanf("%d", &value);

    // Perform Binary Search
    binarySearch(arr, value, n);

    // Free allocated memory
    free(arr);

    return 0;
}
