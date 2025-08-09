#include <stdio.h>
#include <stdlib.h>

// ===== Traversal =======
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the element are %d\n", arr[i]);
    }
}

// =========== deletion at index ===========
int deletionAtIndex(int arr[], int n)
{
    int pos;
    printf("Enter the position you want to deletion:");
    scanf("%d", &pos);
    
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return n; 
    }

    for (int i = pos; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
    return 0;
}

// =============== delete at end ========
int deleteAtEnd(int arr[], int n)
{
    if (n == 0) {
        printf("Array is empty!\n");
        return n;
        }
        
     arr[n-1]=0;        
}
// ============== delete at first =======

int deletionFirst(int arr[], int n)
{

    for (int i = 0; i < n-1 ; i++)
    {
        arr[i] = arr[i+1];
    }
    return 0;
}

int main()
{
    int arr[100];
    int n, capacity = 100;
    printf("Enter the no of elements:");
    scanf("%d", &n);

    for (int i = 0; i < n ; i++)
    {
        printf("Enter the %d element : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
// ================= deletion at index function call
    // display(arr, n);
    // deletionAtIndex(arr, n);
    // n = n - 1;
    // display(arr, n);

// ================= deletion at first function call
    // display(arr, n);
    // deletionFirst(arr, n);
    // n = n - 1;
    // printf("After deletion \n");
    // display(arr, n);

// ================= deletion at end function call

display(arr, n);
deleteAtEnd(arr, n);  
n = n - 1;
printf("After deletion \n");
display(arr, n);
    return 0;
}
