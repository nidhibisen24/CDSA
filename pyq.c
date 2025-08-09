#include<stdio.h>
#include<conio.h>
#include<stdio.h>



int insertionWithMinimumShifts(int arr[], int capacity, int n){
  int value,pos;
    printf("Enter the value you want to inserted:");
    scanf("%d", &value);

    printf("Enter the position you want to inserted:");
    scanf("%d", &pos);

    if (pos< 0 || pos >= n) {
        printf("Position out of bounds\n");
        return;
    }

    // ============ if position is empty i.e. -1 =======

    if (arr[pos]==-1)
    {
        arr[pos]=value;
        return ;
    }

    // ============= if position is occupied  ============

    
    
    


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
    display(arr, n);
    insertionAtIndex(arr, capacity, n);
    display(arr, n);
    n += 1;
    return 0;
}
