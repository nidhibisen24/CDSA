#include <stdio.h>
#include <conio.h>
#include <limits.h>
#include <stdlib.h>
// =================================creating===============================================================
// int main()
// {
// int arr[] = {10,20,33,44};
// for (int i = 0; i < 4; i++)
// {
//     printf("the value %d  element is %d\n",i,arr[i]);
// }
// ============================================ 1-D==================
// int marks[5];

// for (int i = 0; i < 5; i++)
// {
//     printf("Enter the value of %d element\n",i);
//     scanf("%d",&marks[i]);
// }

// for (int i = 0; i < 4; i++)
// {
//   printf("the value of %d element is %d \n",i, marks[i]);
// }
// ============================================= 2-D==================

// int marks[2][4]={{1,2,3,4},
//                  {5,6,7,8}};

// for (int i = 0; i < 2; i++)
// {
//    for (int j = 0; j<4 ; j++)
//    {
//    printf("the value of %d,%d element is %d\n",i,j,marks[i][j]);
// //    printf("%d"marks[i][j]); ================for matrics form
//    }
// //    printf("\n"); ==========for matrics form
// }

// ========================================== traversal in array ==========================

// int main(){
//     int n;
//         printf("enter the no. elements: ");
//         scanf("%d",&n);
    
//     int *arr = (int *)malloc(n * sizeof(int));


//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter %d element: ",i);
//        scanf("%d",&arr[i]); 
//     }

//    for (int i = 0; i < n; i++)
//     {
//         printf("the %d element is: %d \n",i,arr[i]);
        
//     }
//     }

// =========== index=>position with update a element ====================

// int marks[4];
// marks[0] = 11;
// printf("marks is %d\n", marks[0]);
// marks[0] = 23;
// printf("marks is %d", marks[0]);

// ============== for size of array =========================

// int marks[5]={1,3,4,5,6};
// printf("the size is %d",sizeof(marks)/sizeof(int));
// return 0;

// ================smallest number in array ==================

//     int marks[]={5,15,22,1,-15,-24};
//     int size = sizeof(marks)/sizeof(int);
//     int small = __INT_MAX__;
//     int index = -1 ;
//     for (int i = 0; i < size; i++)
//     {
//        if (marks[i]<small);
//        {
//         small=marks[i];
//         index = i ;
//        }
//     }
//       printf("the smallest number %d is at %d index \n  ",small,index);
//      return 0;

// =========================== largest in the array ======================

// int marks[5]={1,4,3,2,4};
// int largest = INT_MIN;
// int index = -1;

// for (int i = 0; i < 5; i++)
// {
//      if (largest < marks[i])
//    {
//       largest=marks[i];
//    }
// }
//    printf("The value of is %d\n",largest);
//    return 0;
// ================================== largest with user input =================
// int marks[5];
// int size = sizeof(marks) / sizeof(int);
// int largest = INT_MIN;
// for (int i = 0; i < size; i++)
// {
//    printf("Enter %d element : \n",i);
//    scanf("%d",&marks[i]);
// }

// for (int i = 0; i < size; i++)
// {
//   if (largest<marks[i])
//    {
//       largest = marks[i];
//    }
// }
// printf("The largest element is %d",largest);
// return 0;

// ======================== reverse a array ==========================
// int main()
// {
//    int n, i;

//    printf("Enter the number of elements :");
//    scanf("%d", &n);

//    //  memory alloctaion ===========
//    int *arr = (int *)malloc(n * sizeof(int));

//    if (arr == NULL)
//    {
//       printf("Memory not allocated");
//       return 1;
//    }

//    printf("Elements %d elements:\n", n);
//    for (i = 0; i < n; i++)
//    {
//       scanf("%d", &arr[i]);
//    }

//    printf("Array in reverse order ");
//    for (i = n - 1; i >= 0; i--)
//    {
//       printf("%d ", arr[i]);
//    }

//    printf("\n");

//    free(arr);
//    return 0;
// }


// ===================== number duplicacy in array ==============



// int main() {
//     int n, i, j;
    
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
    
//     int arr[n];
//     int visited[n]; // Array to track visited elements for counting
    
//     printf("Enter the elements of the array:\n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         visited[i] = 0; // Initialize visited array with 0 (unvisited)
//     }

//     printf("Duplicate elements and their occurrences:\n");
    
//     for (i = 0; i < n; i++) {
//         if (visited[i] == 1) // Skip if already counted
//             continue;
        
//         int count = 1;
        
//         for (j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//                 visited[j] = 1; // Mark as counted
//             }
//         }
        
//         if (count > 1) {
//             printf("%d occurs %d times\n", arr[i], count);
//         }
//     }
    
//     return 0;
// }
