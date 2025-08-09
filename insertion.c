#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// ===== Traversal =======
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the element are %d\n", arr[i]);
    }
}

// ========== insert at any index ==========
int insertionAtIndex(int arr[], int capacity, int n)
{
    int pos, value;
    printf("Enter the value you want to inserted:");
    scanf("%d", &value);

    printf("Enter the position you want to inserted:");
    scanf("%d", &pos);

    if (n >= capacity)
    {
        printf("Array is full! Cannot insert more elements.\n");
        return -1;
    }

    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = value;

    return 1;
}

// ============== insert at start ==========
int insertAtStart(int arr[], int n)
{
    int value;
    printf("Enter the value you want to inserted:");
    scanf("%d", &value);

    for (int i = n - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = value;
}

// ===============insert at the end =========
int insertAtEnd(int arr[], int n)
{
    int value;
    printf("Enter the value you want to inserted:");
    scanf("%d", &value);

    arr[n] = value;
}

int main()
{
    int arr[100];
    int n, capacity = 100;
    printf("Enter the no of elements:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    // display(arr, n);
    // insertionAtIndex(arr, capacity, n);
    // display(arr, n);
    // n += 1;
    // ===== Traversal =======
    // display(arr, n);
    // insertAtStart(arr, n);
    // n += 1;
    display(arr, n);
    insertAtEnd(arr, n);
    n += 1;
    display(arr, n);
    return 0;
}
