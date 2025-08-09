#include <stdio.h>
#include <math.h>
// ===============================  if - else ==================
// int main (){
//     int age ;

//     printf("Enter the age : ",age);
//     scanf("%d",&age);
//     if (age >=18)
//     {
//         printf("Person is aligible for vote");d
//     }else{
//         printf("Person is not for voting");
//     }
//     return 0;
// }

// =================================== if - else  =======================

// int main (){
//     int n;
//     printf("Enter the value of n : ",n);
//     scanf("%d",&n);

//     if (n%2==0)
//     {
//         printf("Even");
//     }
//     else{
//         printf("odd");
//     }
//     return 0;
// }

// =================== while loop=============

// int main(){

//     int n = 3;
//     int sum = 0 ;
//     int i = 1;
//     while (i<=n)
//     {

//         sum=sum+i;
//         i++;
//     }
//  printf("sum is :%d",sum);
//  return 0;
// }

// ================ sum of all odd  numbers from 1 to n===================================

// int main(){
//     int n =  5 ;
//     int oddSum = 0;
//     for (int i = 1; i <=n; i++)
//     {
//         if (i%2!=0)
//         {
//             oddSum=oddSum+i;
//         }
//     }
//      printf("The sum is %d\n",oddSum);
//      return 0 ;
// }
// ============================ no. is prime or not ===========================
// int main(){
//     int n= 3;
//     for (int i = 2; i*i<=n; i++)
//     {
//        if (n%i==0)
//        {
//         printf("non prime number");
//        }else{
//         printf("prime no");
//        }
//     break;
//     }
// return 0 ;
// }
//  ================================ pattern questions ===============================================
// ======================for numbers======================
int main()
{
    int n = 7;
    for (int i = 1; i <= n; i++)
    {
        for (int j =1; j <= n ; j++)
        {
            printf("%d",j);
            // printf("*"); =====for print stars
        }
        printf("\n");
    }
}

// ====================for characters =============

// int main()
// {
//     int n = 3;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A';
//         for (int j = 0; j < n; j++)
//         {
//             printf("%c", ch);
//             ch = ch + 1;
//         }
//         printf("\n");
//     }
// }

// ============= extra num pattern ==========
//  int main(){
//   int n = 3;
//   int num = 1 ;
//   for (int i=0; i < n; i++)
//   {
//     for (int j=0; j < n; j++)
//     {
//        printf("%d",num);
//        num++;
//     }
//     printf("\n");
//   }
//  }

// ==================== for character continuos pattern==

// int main()
// {
//     int n = 3;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%c", ch);
//             ch++;
//         }
//         printf("\n");
//     }
// }

// ========== triangle pattern ==========
// int main(){
//     int n= 4;
//     for (int i = 0; i <n-1; i++)
//     {
//         for (int j = 0; j <=i; j++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// ============ for number triangle ==========

// int main(){
//     int n= 4;

//     for (int i = 0; i < n; i++)
//     {
//         int num = 1;
//        for (int j = 0; j <i+1; j++)
//        {
//         printf("%d",i+1);
//        }
//        printf("\n");
//     }
    
// }