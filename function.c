#include <stdio.h>
#include <conio.h>

//  ==================================== sum of two numbers function
// int sum(int a, int b) // parameters
// {
//     printf("%d\n", a + b);
//     return 0;
// }

//  ===================================== ====== min of 2 numbers

// int min(int a, int b)
// {
//     if (a < b)
//     {
//         printf("%d is minimum\n", a);
//     }
//     else
//     {
//         printf("%d is minimum\n", b);
//     }
//     return 0;
// }

// ================================== function of calculate sum from 1 to n

// int sumOfn(int n){
//       int sum = 0;

//       for (int i = 1; i <= n; i++)
//       {
//         sum = sum + i;
//       }
//       printf("the sum is %d \n",sum);
//        return 0;
// }

// ========================================= function of n factorial
int factN(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
       fact = fact*i;
    }
    printf("the factorial is %d\n",fact);
    return 0;
}
int main()
{
    // sum(5, 1); // arguments
    // sum(10, 3);
    // min(5, 2);
    // min(10, 22);
    // sumOfn(4);
    // sumOfn(5);
    factN(4);
    factN(3);

}