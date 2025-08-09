#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
    int n ;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    
    int *arr = (int *)malloc(n*sizeof(int));
   
   for (int i = 0; i < n; i++)
   {
   printf("Enter the %d element:",i);
   scanf("%d",&arr[i]);
   }
    for (int i = 0; i < n; i++)
    {
       printf("value of %d element is %d\n",i,arr[i]);
    }
}