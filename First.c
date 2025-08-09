// =============== area of square ==========================
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter a :");
//     scanf("%d",&a);
//     int area=a*a;
//     printf("area is %d",area);
//     return 0;
// }

// ================= sum of two numbers ==========================
// #include<stdio.h>
// int main(){
//  int a=10;
//  int b=5;
//  int c= a+b;
//  printf("sum of two numbers is %d",c);
// }

// ==================== minimum number =========================
// #include<stdio.h>
// int main(){
// int a=10;
// int b=10;
// if (a<b)
// {
//    printf("a is minimum %d :",a);
// }
// else if (a>b)
// {
//   printf("b is minimum %d:",b);
// }
// else {
//     printf("both are equal");
// }
// }

// ================== number is odd or even =============
// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the number:");
//     scanf("%d",&a);
//     if (a%2==0)
//     {
//        printf("No is even :%d",a);
//     }
//     else
//     {
//         printf("No is odd :%d",a);
//     }
// }

// ================== sum of n numbers from 1 ============
// #include<stdio.h>
// int main(){
//     int n;
//     int count=1;
//     int sum=0;
//     printf("enter number:");
//     scanf("%d",&n);
//     while (count<=n)
//     {
//         sum +=count;
//         count+=1;
//     }
//     printf("sum of n numbers is :%d",sum);
// }

// =================prime or not===============
// #include<stdio.h>
// int main(){
//       int n;
//       printf("enter the number:");
//       scanf("%d",&n);
//       int count=2;
//      while (count<=(n-1))
//      {
//         if (n%count==0){
//             printf("no is not prime");
//             return 0;
//         }
//         else
//         {
//             count+=1;
//         }
//      }
//      printf("no is prime");
// }

// =================== simple intrest==============
// #include<stdio.h>
// int main(){
//     int p,r,t;
//     printf("enter the principal amount:");
//     scanf("%d",&p);
//     printf("enter the rate:");
//     scanf("%d",&r);
//     printf("enter the time:");
//     scanf("%d",&t);
//     int si=(p*r*t)/100;
//     printf("simple intrest is :%d",si);
//     }

//================== max of 2 numbers =================
// #include<stdio.h>
// int main(){
// int a;
// int b;
// printf("enter a:");
// scanf("%d",&a);
// printf("enter b:");
// scanf("%d",&b);
// if (a>b)
// {
//    printf("a is max");
// }
// else{
// printf("b is max");
// }
// }

// =============== Factorial of n numbers=============
// #include<stdio.h>
// int main(){
//      int n;
//      int count = 1;
//      int fact = 1;

//      printf("enter the factorial number :");
//      scanf("%d",&n);

//      while(count<=n)
//      {
//         fact = fact * count;
//         count +=1;
//      }
//      printf("factorial is: %d",fact);
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
// int n, i, largest;

// printf("Enter the number of elements: "); scanf("%d", &n);

// int *arr = (int *)malloc(n * sizeof(int));

// if (arr == NULL) {
// printf("Memory allocation failed!\n"); return 1;
// }

// printf("Enter %d numbers:\n", n); for (i = 0; i < n; i++) {
// scanf("%d", &arr[i]);
// }

// largest = arr[0];

// for (i = 1; i < n; i++) {

// if (arr[i] > largest) { largest = arr[i];
// }
// }
// printf("The largest number is: %d\n", largest);
// free(arr);
// printf("");
//  return 0;
// }
//  ==========assignment Q-1 =============
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n, largest;
//     printf("Enter the value of n\n");
//     scanf("%d", &n);
//     int *A;
//     A = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the value of element %d:- \n", i + 1);
//         scanf("%d", &A[i]);
//     }
//     largest = A[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (largest < A[i])
//         {
//             largest = A[i];
//         }
//     }
//     printf("largest no:- %d", largest);
//     printf("\n Nidhi Bisen Assignment Q-1");
// }

// ============= Q-2=========

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n, small;
//     printf("Enter the value of n\n");
//     scanf("%d", &n);
//     int *A;
//     A = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the value of element %d:- \n", i + 1);
//         scanf("%d", &A[i]);
//     }
//     small = A[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (small > A[i])
//         {
//             small = A[i];
//         }
//     }
//     printf("small no:- %d", small);
//     printf("\n Nidhi Bisen Assignment Q-2");
// }

// ===========Q-3=========

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int initialSize = 5;
//     int newSize = 10;
//     int i;
//     int *array = (int *)malloc(initialSize * sizeof(int));
//     if (array == NULL)
//     {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }
//     for (i = 0; i < initialSize; i++)
//     {
//         array[i] = i + 1;
//     }
//     array = (int *)realloc(array, newSize * sizeof(int));
//     if (array == NULL)
//     {
//         printf("Memory reallocation failed!\n");
//         return 1;
//     }
//     for (i = initialSize; i < newSize; i++)
//     {
//         array[i] = i + 1;
//     }
//     printf("Array elements in reverse order:\n");
//     for (i = newSize - 1; i >= 0; i--)
//     {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
//     printf("\n Nidhi Bisen Assignment Q-3");
//     free(array);
//     return 0;
// }

// ==========Q-4=============

// #include <stdio.h>
// #include <stdlib.h>
// void findDuplicates(int *arr, int size)
// {
//     int i, j;
//     int *counts = (int *)malloc(size * sizeof(int));
//     if (counts == NULL)
//     {
//         printf("Memory allocation failed for counts array!\n");
//         return;
//     }
//     for (i = 0; i < size; i++)
//     {
//         counts[i] = 0;
//     }
//     for (i = 0; i < size; i++)
//     {
//         if (counts[i] == 0)
//         {
//             int count = 1;
//             for (j = i + 1; j < size; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     count++;
//                     counts[j] = -1;
//                 }
//             }
//             if (count > 1)
//             {
//                 printf("Element %d occurs %d times\n", arr[i],
//                        count);
//             }
//         }
//     }
//     free(counts);
// }
// int main()
// {
//     int size;
//     int *array;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &size);
//     array = (int *)malloc(size * sizeof(int));
//     if (array == NULL)
//     {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }
//     printf("Enter %d elements:\n", size);
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &array[i]);
//     }
//     findDuplicates(array, size);
//     printf("\n Nidhi Bisen Assignment Q-4");
//     free(array);
//     return 0;
// }

// ============== Q 5==============
// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
// int data;
// struct node *next;
// } *start = NULL;
// void make()
// {
// printf("you are in make funcution\n");
// int g;
// struct node *newnode, *currentnode;
// while (1)
// {
// newnode = (struct node *)malloc(sizeof(struct node)); // size allocation
// printf("enter the data :- \n");
// scanf("%d", &newnode->data); // data
// newnode->next = NULL;
// if (start == NULL)
// {
// start = newnode;
// currentnode = newnode;
// }
// else
// {
// currentnode->next = newnode;
// currentnode = newnode;
// }
// printf("press anykey to make a newnode \npress 2 for exit\n");
// scanf("%d", &g);

// if (g == 2)
// {
// break;
// }
// }
// }
// void show()
// {
// printf("you are in show function\n");
// struct node *ptr;
// ptr = start;
// while (ptr != NULL)
// {
// printf("%d ->", ptr->data);
// ptr = ptr->next;
// }
// printf("\n");
// }
// void beforestart()
// {
// printf("you are in beforestart function\n");
// struct node *newnode;
// newnode = (struct node *)malloc(sizeof(struct node)); // size allocation
// printf("enter the data :- \n");
// scanf("%d", &newnode->data); // data
// newnode->next = start;
// start = newnode;
// }
// void afterlast()
// {
// printf("you are in afterlast function\n");
// struct node *newnode, *currentnode, *ptr;
// newnode = (struct node *)malloc(sizeof(struct node)); // size allocation
// printf("enter the data :- \n");
// scanf("%d", &newnode->data); // data

// newnode->next = NULL;
// ptr = start;
// while (ptr->next != NULL)
// { ptr = ptr->next; }
// if (ptr->next == NULL)
// { ptr->next = newnode;}
// }
// void ascen()
// {
// struct node *newnode, *pre, *ptr, *last;
// newnode = (struct node *)malloc(sizeof(struct node)); // size allocation
// printf("enter the data :- \n");
// scanf("%d", &newnode->data); // data
// newnode->next = NULL;
// ptr = start;
// while (newnode->data > ptr->data)
// {
// pre = ptr;
// ptr = ptr->next;
// }
// newnode->next = ptr;
// pre->next = newnode;
// void delfn()
// {
// struct node *temp;
// printf("you are in del first node func\n");
// if (start == NULL)
// {
// printf("there is nothing to delete\n");
// }
// else if (start->next == NULL)
// {
// free(start);
// }
// else
// {
// temp = start->next;
// free(start);
// start = temp;
// }
// }
// void delbs()
// {
// struct node *pre, *ptr, *pst, *input;
// input = (struct node *)malloc(sizeof(struct node)); // dma to inputnode
// printf("enter the data of specified position\n");
// scanf("%d", &input->data);
// pst = start;
// while (pst->data != input->data)
// {
// pre = ptr;
// ptr = pst;
// pst = pst->next;
// }
// pre->next = ptr->next;
// free(ptr);
// free(input);
// }
// void delas()
// {
// struct node *ptr, *pst, *input;
// input = (struct node *)malloc(sizeof(struct node)); // dma to inputnode
// printf("enter the data of specified position\n");
// scanf("%d", &input->data);
// ptr = start;
// while (ptr->data != input->data)
// {
// ptr = ptr->next;
// }
// pst = ptr->next;
// ptr->next = pst->next;
// free(pst);
// free(input);
// }

// int main()
// {
// char ch;
// while (ch != 'q')
// {
// printf("Press (m) to : To make the linked list.\n");
// printf("Press (s) to : To show the linked list.\n");
// printf("Press (a) to : Insert a node at the front of the linkedlist.\n");
// printf("Press (b) to : Insert a node at the end of the linkedlist. \n");
// printf("Press (c) to : Insert a node such that linked list is inascending order.(according to info. Field) \n");
// printf("Press (d) to : Delete a first node of the linkedlist.\n");
// printf("Press (e) to : Delete a node before specified position.\n");
// printf("Press (f) to : Delete a node after specifiedposition.\n");
// printf("Press (q) to : Exit the function.\n");
// scanf("%s", &ch);
// switch (ch)
//  {
//  case 'm':
//  make();
//  break;
//  case 's':
//  show();
//  break;
//  case 'a':
//  beforestart();
//  break;
//  case 'b':
//  afterlast();
//  break;
//  case 'c':
//  ascen();
//  break;
//  case 'd':
//  delfn();
// break;
// case 'e':
// delbs();
// break;
// case 'f':
//  delas();
// break;
// default:
// break;
// }
// }
// }
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node *next;
// } *start = NULL;

// void make() {
//     printf("You are in make function\n");
//     int g;
//     struct node *newnode, *currentnode;
//     while (1) {
//         newnode = (struct node *)malloc(sizeof(struct node)); // dynamic memory allocation
//         printf("Enter the data :- \n");
//         scanf("%d", &newnode->data); // input data
//         newnode->next = NULL;
//         if (start == NULL) {
//             start = newnode;
//             currentnode = newnode;
//         } else {
//             currentnode->next = newnode;
//             currentnode = newnode;
//         }
//         printf("Press 1 to add a new node or 2 for exit: ");
//         scanf("%d", &g);

//         if (g == 2) {
//             break;
//         }
//     }
// }

// void show() {
//     printf("You are in show function\n");
//     struct node *ptr;
//     ptr = start;
//     while (ptr != NULL) {
//         printf("%d -> ", ptr->data);
//         ptr = ptr->next;
//     }
//     printf("NULL\n");
// }

// void beforestart() {
//     printf("You are in beforestart function\n");
//     struct node *newnode;
//     newnode = (struct node *)malloc(sizeof(struct node)); // dynamic memory allocation
//     printf("Enter the data :- \n");
//     scanf("%d", &newnode->data); // input data
//     newnode->next = start;
//     start = newnode;
// }

// void afterlast() {
//     printf("You are in afterlast function\n");
//     struct node *newnode, *ptr;
//     newnode = (struct node *)malloc(sizeof(struct node)); // dynamic memory allocation
//     printf("Enter the data :- \n");
//     scanf("%d", &newnode->data); // input data
//     newnode->next = NULL;

//     if (start == NULL) {
//         start = newnode;
//     } else {
//         ptr = start;
//         while (ptr->next != NULL) {
//             ptr = ptr->next;
//         }
//         ptr->next = newnode;
//     }
// }

// void ascen() {
//     printf("You are in ascending order insertion function\n");
//     struct node *newnode, *pre = NULL, *ptr;
//     newnode = (struct node *)malloc(sizeof(struct node)); // dynamic memory allocation
//     printf("Enter the data :- \n");
//     scanf("%d", &newnode->data); // input data
//     newnode->next = NULL;

//     if (start == NULL || newnode->data < start->data) {
//         newnode->next = start;
//         start = newnode;
//     } else {
//         ptr = start;
//         while (ptr != NULL && newnode->data > ptr->data) {
//             pre = ptr;
//             ptr = ptr->next;
//         }
//         newnode->next = pre->next;
//         pre->next = newnode;
//     }
// }

// void delfn() {
//     printf("You are in delete first node function\n");
//     struct node *temp;
//     if (start == NULL) {
//         printf("There is nothing to delete\n");
//     } else {
//         temp = start;
//         start = start->next;
//         free(temp);
//         printf("First node deleted successfully\n");
//     }
// }

// void delbs() {
//     printf("You are in delete before specified position function\n");
//     struct node *pre = NULL, *ptr, *pst;
//     int value;
//     printf("Enter the data of the node before which you want to delete:\n");
//     scanf("%d", &value);

//     if (start == NULL || start->next == NULL) {
//         printf("Not enough nodes to perform operation\n");
//         return;
//     }

//     ptr = start;
//     while (ptr->next != NULL && ptr->next->data != value) {
//         pre = ptr;
//         ptr = ptr->next;
//     }

//     if (ptr->next == NULL) {
//         printf("Specified node not found\n");
//     } else {
//         pst = pre->next;
//         pre->next = ptr->next;
//         free(ptr);
//         printf("Node before specified position deleted\n");
//     }
// }

// void delas() {
//     printf("You are in delete after specified position function\n");
//     struct node *ptr, *pst;
//     int value;
//     printf("Enter the data of the node after which you want to delete:\n");
//     scanf("%d", &value);

//     ptr = start;
//     while (ptr != NULL && ptr->data != value) {
//         ptr = ptr->next;
//     }

//     if (ptr == NULL || ptr->next == NULL) {
//         printf("Node not found or there is no node after the specified node\n");
//     } else {
//         pst = ptr->next;
//         ptr->next = pst->next;
//         free(pst);
//         printf("Node after specified position deleted\n");
//     }
// }

// int main() {
//     char ch;
//     while (1) {
//         printf("Press (m) to: Make the linked list.\n");
//         printf("Press (s) to: Show the linked list.\n");
//         printf("Press (a) to: Insert a node at the front.\n");
//         printf("Press (b) to: Insert a node at the end.\n");
//         printf("Press (c) to: Insert a node in ascending order.\n");
//         printf("Press (d) to: Delete the first node.\n");
//         printf("Press (e) to: Delete a node before specified position.\n");
//         printf("Press (f) to: Delete a node after specified position.\n");
//         printf("Press (q) to: Exit.\n");
//         scanf(" %c", &ch);

//         switch (ch) {
//             case 'm':
//                 make();
//                 break;
//             case 's':
//                 show();
//                 break;
//             case 'a':
//                 beforestart();
//                 break;
//             case 'b':
//                 afterlast();
//                 break;
//             case 'c':
//                 ascen();
//                 break;
//             case 'd':
//                 delfn();
//                 break;
//             case 'e':
//                 delbs();
//                 break;
//             case 'f':
//                 delas();
//                 break;
//             case 'q':
//                 exit(0);
//             default:
//                 printf("Invalid choice! Please try again.\n");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
//     struct node *prev;
// } *start = NULL;
// void make()
// {
//     int g;
//     struct node *newnode, *currentnode;
//     while (1)
//     {
//         newnode = (struct node *)malloc(sizeof(struct node));
//         printf("Enter the data: \n");
//         scanf("%d", &newnode->data);
//         newnode->next = NULL;
//         newnode->prev = NULL;
//         if (start == NULL)
//         {
//             start = newnode;
//             currentnode = newnode;
//         }
//         else
//         {
//             currentnode->next = newnode;
//             newnode->prev = currentnode;
//             currentnode = newnode;
//         }
// printf("Press any key to make a new node \nPress 2 for
// exit\n");
// scanf("%d", &g);
// if (g == 2) {
//             0801IT221081 LAKESH KAKODIYA break;
// }
//     }
// }
// void show()
// {
//     struct node *ptr;
//     ptr = start;
//     while (ptr != NULL)
//     {
//         printf("%d -> ", ptr->data);
//         ptr = ptr->next;
//     }
//     printf("\n");
// }
// void beforestart()
// {
//     struct node *newnode;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter the data: \n");
//     scanf("%d", &newnode->data);
//     newnode->next = start;
//     newnode->prev = NULL;
//     if (start != NULL)
//     {
//         start->prev = newnode;
//     }
//     start = newnode;
// }
// void afterlast()
// {
//     struct node *newnode, *ptr;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter the data: \n");
//     scanf("%d", &newnode->data);
//     newnode->next = NULL;
//     ptr = start;
//     0801IT221081 LAKESH KAKODIYA if (ptr == NULL)
//     {
//         start = newnode;
//         newnode->prev = NULL;
//     }
//     else
//     {
//         while (ptr->next != NULL)
//         {
//             ptr = ptr->next;
//         }
//         ptr->next = newnode;
//         newnode->prev = ptr;
//     }
// }
// void ascen()
// {
//     struct node *newnode, *pre, *ptr;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter the data: \n");
//     scanf("%d", &newnode->data);
//     newnode->next = NULL;
//     newnode->prev = NULL;
//     if (start == NULL || newnode->data < start->data)
//     {
//         newnode->next = start;
//         if (start != NULL)
//         {
//             start->prev = newnode;
//         }
//         start = newnode;
//     }
//     else
//     {
//         ptr = start;
//         while (ptr != NULL && newnode->data > ptr->data)
//         {
//             pre = ptr;
//             ptr = ptr->next;
//         }
//         newnode->next = ptr;
//         newnode->prev = pre;
//         pre->next = newnode;
//         if (ptr != NULL)
//         {
//             ptr->prev = newnode;
//         }
//         0801IT221081 LAKESH KAKODIYA
//     }
// }
// void delfn()
// {
//     struct node *temp;
//     if (start == NULL)
//     {
//         printf("There is nothing to delete\n");
//     }
//     else
//     {
//         temp = start;
//         start = start->next;
//         if (start != NULL)
//         {
//             start->prev = NULL;
//         }
//         free(temp);
//     }
// }
// int main()
// {
//     char ch;
//     while (ch != 'q')
//     {
//         printf("Press (m) to : Make the linked list.\n");
//         printf("Press (s) to : Show the linked list.\n");
// printf("Press (a) to : Insert a node at the front of the
// linked list.\n");
// printf("Press (b) to : Insert a node at the end of the linked
// list.\n");
// printf("Press (c) to : Insert a node such that the linked
// list is in ascending order.\n");
// printf("Press (d) to : Delete the first node of the linked
// list.\n");
// printf("Press (q) to : Exit the function.\n");
// scanf(" %c", &ch);
// switch (ch) {
//         case 'm':
//             make();
//             break;
//             0 8 0 1IT 2 2 1 0 8 1 L
//                 A
//                     K
//                         E
//                             S
//                                 H
//                                     K
//                                         A
//                                             K
//                                                 O
//                                                     DIYA
//                                                         c
//                                                             a
//                                                                 s
//                                                                     e 's' : show();
//             b
//                 r
//                     e
//                         a
//                             k;
//             c
//                 a
//                     s
//                         e 'a' : befor
//                                     e
//                                         s
//                                             t
//                                                 a
//                                                     r
//                                                     t();
//             b
//                 r
//                     e
//                         a
//                             k;
//             c
//                 a
//                     s
//                         e 'b' : after
//                                     l
//                                         a
//                                             s
//                                             t();
//             b
//                 r
//                     e
//                         a
//                             k;
//             c
//                 a
//                     s
//                         e 'c' : ascen();
//             b
//                 r
//                     e
//                         a
//                             k;
//             c
//                 a
//                     s
//                         e 'd' : delfn();
//             b
//                 r
//                     e
//                         a
//                             k;
//             d
//                 e
//                     f
//                         a
//                             u
//                                 l
//                                     t
//                 : b
//                       r
//                           e
//                               a
//                                   k;
// }
//     }
//     r
//         e
//             t
//                 u
//                     r
//                         n 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node *next;
//     struct node *prev;
// } *start = NULL;

// void make() {
//     int g;
//     struct node *newnode, *currentnode;
//     while (1) {
//         newnode = (struct node *)malloc(sizeof(struct node));
//         printf("Enter the data: \n");
//         scanf("%d", &newnode->data);
//         newnode->next = NULL;
//         newnode->prev = NULL;

//         if (start == NULL) {
//             start = newnode;
//             currentnode = newnode;
//         } else {
//             currentnode->next = newnode;
//             newnode->prev = currentnode;
//             currentnode = newnode;
//         }

//         printf("Press any key to make a new node or press 2 to exit: ");
//         scanf("%d", &g);
//         if (g == 2) {
//             break;
//         }
//     }
// }

// void show() {
//     struct node *ptr;
//     ptr = start;
//     while (ptr != NULL) {
//         printf("%d -> ", ptr->data);
//         ptr = ptr->next;
//     }
//     printf("NULL\n");
// }

// void beforestart() {
//     struct node *newnode;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter the data: \n");
//     scanf("%d", &newnode->data);
//     newnode->next = start;
//     newnode->prev = NULL;

//     if (start != NULL) {
//         start->prev = newnode;
//     }
//     start = newnode;
// }

// void afterlast() {
//     struct node *newnode, *ptr;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter the data: \n");
//     scanf("%d", &newnode->data);
//     newnode->next = NULL;

//     if (start == NULL) {
//         start = newnode;
//         newnode->prev = NULL;
//     } else {
//         ptr = start;
//         while (ptr->next != NULL) {
//             ptr = ptr->next;
//         }
//         ptr->next = newnode;
//         newnode->prev = ptr;
//     }
// }

// void ascen() {
//     struct node *newnode, *pre, *ptr;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     printf("Enter the data: \n");
//     scanf("%d", &newnode->data);
//     newnode->next = NULL;
//     newnode->prev = NULL;

//     if (start == NULL || newnode->data < start->data) {
//         newnode->next = start;
//         if (start != NULL) {
//             start->prev = newnode;
//         }
//         start = newnode;
//     } else {
//         ptr = start;
//         while (ptr != NULL && newnode->data > ptr->data) {
//             pre = ptr;
//             ptr = ptr->next;
//         }
//         newnode->next = ptr;
//         newnode->prev = pre;
//         pre->next = newnode;
//         if (ptr != NULL) {
//             ptr->prev = newnode;
//         }
//     }
// }

// void delfn() {
//     struct node *temp;
//     if (start == NULL) {
//         printf("There is nothing to delete\n");
//     } else {
//         temp = start;
//         start = start->next;
//         if (start != NULL) {
//             start->prev = NULL;
//         }
//         free(temp);
//     }
// }

// int main() {
//     char ch;
//     while (1) {
//         printf("\nOptions:\n");
//         printf("Press (m) to : Make the linked list.\n");
//         printf("Press (s) to : Show the linked list.\n");
//         printf("Press (a) to : Insert a node at the front of the linked list.\n");
//         printf("Press (b) to : Insert a node at the end of the linked list.\n");
//         printf("Press (c) to : Insert a node such that the linked list is in ascending order.\n");
//         printf("Press (d) to : Delete the first node of the linked list.\n");
//         printf("Press (q) to : Exit the function.\n");

//         scanf(" %c", &ch);
//         switch (ch) {
//             case 'm':
//                 make();
//                 break;
//             case 's':
//                 show();
//                 break;
//             case 'a':
//                 beforestart();
//                 break;
//             case 'b':
//                 afterlast();
//                 break;
//             case 'c':
//                 ascen();
//                 break;
//             case 'd':
//                 delfn();
//                 break;
//             case 'q':
//                 exit(0);
//             default:
//                 printf("Invalid choice! Please try again.\n");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// void findDuplicates(int *arr, int size)
// {
//     int i, j;
//     int *counts = (int *)malloc(size * sizeof(int));
//     if (counts == NULL)
//     {
//         printf("Memory allocation failed for counts array!\n");
//         return;
//     }
//     for (i = 0; i < size; i++)
//     {
//         counts[i] = 0;
//     }
//     for (i = 0; i < size; i++)
//     {
//         if (counts[i] == 0)
//         {
//             int count = 1;
//             for (j = i + 1; j < size; j++)
//             {
//                 if (arr[i] == arr[j])
//                 {
//                     count++;
//                     counts[j] = -1;
//                 }
//             }
//             if (count > 1)
//             {
//                 printf("Element %d occurs %d times\n", arr[i],
//                        count);
//             }
//         }
//     }
//     free(counts);
// }
// int main()
// {
//     int size;
//     int *array;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &size);
//     array = (int *)malloc(size * sizeof(int));
//     if (array == NULL)
//     {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }
//     printf("Enter %d elements:\n", size);
//     for (int i = 0; i < size; i++)
//     {
//         scanf("%d", &array[i]);
//     }
//     findDuplicates(array, size);
//     printf("\n Nidhi Bisen Assignment Q-4");
//     free(array);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int initialSize = 5;
//     int newSize = 10;
//     int i;
//     int *array = (int *)malloc(initialSize * sizeof(int));
//     if (array == NULL)
//     {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }
//     for (i = 0; i < initialSize; i++)
//     {
//         array[i] = i + 1;
//     }
//     array = (int *)realloc(array, newSize * sizeof(int));
//     if (array == NULL)
//     {
//         printf("Memory reallocation failed!\n");
//         return 1;
//     }
//     for (i = initialSize; i < newSize; i++)
//     {
//         array[i] = i + 1;
//     }
//     printf("Array elements in reverse order:\n");
//     for (i = newSize - 1; i >= 0; i--)
//     {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
//     printf("\n Nidhi Bisen Assignment Q-3");
//     free(array);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int n, i, largest;

//     printf("Enter the value of n: ");
//     scanf("%d", &n);
//     int *arr = (int *)malloc(n * sizeof(int));

//     if (arr == NULL)
//     {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }
//     printf("Enter %d numbers:\n", n);
//     for (i = 0; i < n; i++)
//     {
//         printf("enter the value of element %d:- \n", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     largest = arr[0];
//     for (i = 1; i < n; i++)
//     {

//         if (arr[i] > largest)
//         {
//             largest = arr[i];
//         }
//     }
//     printf("The largest number is: %d\n", largest);
//     printf("\n Nidhi Bisen Assignment Q-1");

//     free(arr);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n, i, smallest;
//     printf("Enter the value of n\n ");
//     scanf("%d", &n);
//     A = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         printf("enter the value of element %d:- \n", i + 1);
//         scanf("%d", &A[i]);
//     }
//     small = A[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (small > A[i])
//         {
//             small = A[i];
//         }
//     }
//     printf("small no:- %d", small);
//     printf("\n Nidhi Bisen Assignment Q-2");
// }

// =============== Q -7 ======================

// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node* next;
// } *start = NULL;

// void display() {
//     struct node* temp = start;
//     if (start == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     do {
//         printf("%d ->", temp->data);
//         temp = temp->next;
//     } while (temp != start);
//     printf("%d\n", start->data);
// }

// void insert1() { // Insert at the beginning
//     struct node* newnode, *last;
//     newnode = (struct node*)malloc(sizeof(struct node));
//     printf("\nEnter data: ");
//     scanf("%d", &newnode->data);
//     if (start == NULL) {
//         start = newnode;
//         newnode->next = newnode;
//     } else {
//         struct node* temp = start;
//         while (temp->next != start) {
//             temp = temp->next;
//         }
//         temp->next = newnode;
//         newnode->next = start;
//         start = newnode;
//     }
//     display();
// }

// void insert2() { // Insert at the end
//     struct node* newnode, *temp = start;
//     newnode = (struct node*)malloc(sizeof(struct node));
//     printf("\nEnter data: ");
//     scanf("%d", &newnode->data);
//     if (start == NULL) {
//         start = newnode;
//         newnode->next = newnode;
//     } else {
//         while (temp->next != start) {
//             temp = temp->next;
//         }
//         temp->next = newnode;
//         newnode->next = start;
//     }
//     display();
// }

// void insert3() { // Insert at specific position
//     int n;
//     struct node* newnode, *temp = start;
//     newnode = (struct node*)malloc(sizeof(struct node));
//     printf("\nEnter data: ");
//     scanf("%d", &newnode->data);
//     printf("Enter position from starting node where you want to insert: ");
//     scanf("%d", &n);
//     if (n == 1) {
//         newnode->next = start;
//         struct node* temp = start;
//         while (temp->next != start) {
//             temp = temp->next;
//         }
//         temp->next = newnode;
//         start = newnode;
//     } else {
//         int i = 1;
//         while (i < n - 1 && temp->next != start) {
//             temp = temp->next;
//             i++;
//         }
//         newnode->next = temp->next;
//         temp->next = newnode;
//     }
//     display();
// }

// void delete1() { // Delete the first node
//     struct node *temp = start, *ptr = start;
//     if (start == NULL) {
//         printf("Linked list is empty!!\n");
//         return;
//     }
//     while (temp->next != start) {
//         temp = temp->next;
//     }
//     temp->next = start->next;
//     start = start->next;
//     free(ptr);
//     display();
// }

// void delete2() { // Delete the last node
//     struct node *alt, *temp = start;
//     if (start == NULL) {
//         printf("Linked list is empty!!\n");
//         return;
//     }
//     while (temp->next != start) {
//         alt = temp;
//         temp = temp->next;
//     }
//     alt->next = start;
//     free(temp);
//     display();
// }

// void delete3() { // Delete node from a specific location
//     int n;
//     struct node *alt, *temp = start;
//     if (start == NULL) {
//         printf("Linked list is empty!!\n");
//         return;
//     }
//     printf("Enter position from starting node where you want to delete node: ");
//     scanf("%d", &n);
//     if (n == 1) {
//         delete1();
//     } else {
//         int i = 1;
//         while (i < n && temp->next != start) {
//             alt = temp;
//             temp = temp->next;
//             i++;
//         }
//         alt->next = temp->next;
//         free(temp);
//     }
//     display();
// }

// void create() {
//     int n, m, k = 0;
//     struct node *newnode, *last;
//     do {
//         newnode = (struct node*)malloc(sizeof(struct node));
//         printf("\nEnter data: ");
//         scanf("%d", &newnode->data);
//         newnode->next = newnode;
//         if (start == NULL) {
//             start = newnode;
//             last = newnode;
//         } else {
//             last->next = newnode;
//             last = newnode;
//             newnode->next = start;
//         }
//         printf("\nPress 1 (continue) 2 (end): ");
//         scanf("%d", &n);
//     } while (n != 2);

//     do {
//         printf("\nEnter the operation you want to perform: \n"
//                "1. Insert new node at beginning\n"
//                "2. Insert new node at end\n"
//                "3. Insert new node at some specific location\n"
//                "4. Delete first node\n"
//                "5. Delete last node\n"
//                "6. Delete node from specific location\n"
//                "7. Print linked list\n"
//                "8. Exit\n");
//         scanf("%d", &m);

//         switch (m) {
//             case 1: insert1(); break;
//             case 2: insert2(); break;
//             case 3: insert3(); break;
//             case 4: delete1(); break;
//             case 5: delete2(); break;
//             case 6: delete3(); break;
//             case 7: display(); break;
//             case 8: k = 8; break;
//             default: printf("Invalid option!\n");
//         }
//     } while (k != 8);
// }

// int main() {
//     create();
//     return 0;
// }


//  ===================== Q-8 =====================

// ==================== Q-14===================

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>
// #define MAX 100
// char stack[MAX];
// int top = -1;
// void push(char x)
// {
//     stack[++top] = x;
//     char pop()
//     {
//         if (top == -1)
//         {
//             return -1;
//         }
//         else
//         {
//             return stack[top--];
//         }
//     }
// }
// int precedence(char x)
// {
//     if (x == '(')
//     {
//         return 0;
//     }
//     if (x == '+' || x == '-')
//     {
//         return 1;
//     }
//     if (x == '*' || x == '/')
//     {
//         return 2;
//     }
//     return 0;
// }
// int isOperator(char x)
// {
//     return (x == '+' || x == '-' || x == '*' || x == '/');
// }
// void infixToPostfix(char *infix)
// {
//     char postfix[MAX];
//     int i = 0, j = 0;
//     char x;
//     while (infix[i] != '\0')
//     {
//         if (isalnum(infix[i]))
//         {
//             postfix[j++] = infix[i];
//         }
//         else if (infix[i] == '(')
//         {
//             push(infix[i]);
//         }
//         else if (infix[i] == ')')
//         {
//             while ((x = pop()) != '(')
//             {
//                 postfix[j++] = x;
//             }
//         }
//         else if (isOperator(infix[i]))
//         {
//             while (top != -1 && precedence(stack[top]) >= precedence(infix[i]))
//             {
//                 postfix[j++] = pop();
//             }
//             push(infix[i]);
//         }
//         i++;
//     }
//     while (top != -1)
//     {
//         postfix[j++] = pop();
//     }
//     postfix[j] ='\0';
//     printf("Postfix Expression: %s\n", postfix);
// }
// int main()
// {
//     char infix[MAX];
//     printf("Enter Infix Expression:");
//     scanf("%s", infix);
//     infixToPostfix(infix);
//     return 0;
// }

// #include <stdio.h>
// #include <ctype.h>
// #include <string.h>

// #define MAX 100

// char stack[MAX];
// int top = -1;

// void push(char x)
// {
//     stack[++top] = x;
// }

// char pop()
// {
//     if (top == -1)
//     {
//         return -1;
//     }
//     else
//     {
//         return stack[top--];
//     }
// }

// int precedence(char x)
// {
//     if (x == '(')
//     {
//         return 0;
//     }
//     if (x == '+' || x == '-')
//     {
//         return 1;
//     }
//     if (x == '*' || x == '/')
//     {
//         return 2;
//     }
//     return 0;
// }

// int isOperator(char x)
// {
//     return (x == '+' || x == '-' || x == '*' || x == '/');
// }

// void infixToPostfix(char *infix)
// {
//     char postfix[MAX];
//     int i = 0, j = 0;
//     char x;

//     while (infix[i] != '\0')
//     {
//         if (isalnum(infix[i]))
//         {
//             postfix[j++] = infix[i];
//         }
//         else if (infix[i] == '(')
//         {
//             push(infix[i]);
//         }
//         else if (infix[i] == ')')
//         {
//             while ((x = pop()) != '(')
//             {
//                 postfix[j++] = x;
//             }
//         }
//         else if (isOperator(infix[i]))
//         {
//             while (top != -1 && precedence(stack[top]) >= precedence(infix[i]))
//             {
//                 postfix[j++] = pop();
//             }
//             push(infix[i]);
//         }
//         i++;
//     }

//     while (top != -1)
//     {
//         postfix[j++] = pop();
//     }

//     postfix[j] = '\0';
//     printf("Postfix Expression: %s\n", postfix);
// }

// int main()
// {
//     char infix[MAX];
//     printf("Enter Infix Expression: ");
//     scanf("%s", infix);
//     infixToPostfix(infix);
//     return 0;
// }

// ===================== Q15====================

// #include <stdio.h>
// #include <ctype.h>
// #include <stdlib.h>
// #define MAX 100
// int stack[MAX];
// int top = -1;
// void push(int x)
// {
//     if (top == MAX - 1)
//     {
//         printf("Stack Overflow\n");
//     }
//     else
//     {
//         stack[++top] = x;
//     }
// }
// int pop()
// {
//     if (top == -1)
//     {
//         printf("Stack Underflow\n");
//         return -1;
//     }
//     else
//     {
//         return stack[top--];
//     }
// }
// int evaluatePostfix(char *postfix)
// {
//     int i = 0;
//     char ch;
//     int val;
//     while (postfix[i] != '\0')
//     {
//         ch = postfix[i];
//         if (isdigit(ch))
//         {
//             push(ch - '0'); // Convert char to int
//         }
//         else
//         {
//             int val2 = pop();
//             int val1 = pop();
//             switch (ch)
//             {
//             case '+':
//                 push(val1 + val2);
//                 break;
//             case '-':
//                 push(val1 - val2);
//                 break;
//             case '*':
//                 push(val1 * val2);
//                 break;
//             case '/':
//                 push(val1 / val2);
//                 break;
//             default:
//                 printf("Invalid operator\n");
//                 return -1;
//             }
//         }
//         i++;
//     }
//     return pop(); // Final result in the stack
// }
// int main()
// {
//     char postfix[MAX];
//     printf("Enter Postfix Expression: ");
//     scanf("%s", postfix);
//     int result = evaluatePostfix(postfix);
//     printf("The result of the postfix evaluation is: %d\n", result);
//     return 0;
// }

// ============== Q-16==================

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// struct Node *newNode(int data)
// {
//     struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
//     temp->data = data;
//     temp->next = NULL;
//     return temp;
// }

// struct Queue
// {
//     struct Node *front, *rear;
// };

// struct Queue *createQueue()
// {
//     struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
//     q->front = q->rear = NULL;
//     return q;
// }

// void enqueue(struct Queue *q, int data)
// {
//     struct Node *temp = newNode(data);
//     if (q->rear == NULL)
//     {
//         q->front = q->rear = temp;
//         return;
//     }
//     q->rear->next = temp;
//     q->rear = temp;
//     printf("%d inserted into the queue.\n", data);
// }

// void dequeue(struct Queue *q)
// {
//     if (q->front == NULL)
//     {
//         printf("Queue is empty, nothing to delete.\n");
//         return;
//     }
//     struct Node *temp = q->front;
//     q->front = q->front->next;
//     if (q->front == NULL)
//     {
//         q->rear = NULL;
//     }
//     printf("%d deleted from the queue.\n", temp->data);
//     free(temp);
// }

// void display(struct Queue *q)
// {
//     if (q->front == NULL)
//     {
//         printf("Queue is empty.\n");
//         return;
//     }
//     struct Node *temp = q->front;
//     printf("Queue: ");
//     while (temp != NULL)
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// int main()
// {
//     printf("Nidhi Bisen\n0801it243D03\n\n");

//     struct Queue *q = createQueue();
//     enqueue(q, 10);
//     enqueue(q, 20);
//     enqueue(q, 30);

//     display(q);

//     dequeue(q);
//     display(q);

//     dequeue(q);
//     display(q);

//     dequeue(q);
//     display(q);

//     dequeue(q);

//     return 0;
// }

// ===================== Q-17==================

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// struct Queue
// {
//     struct Node *front, *rear;
// };

// struct Node *newNode(int data)
// {
//     struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
//     temp->data = data;
//     temp->next = NULL;
//     return temp;
// }

// struct Queue *createQueue()
// {
//     struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
//     q->front = q->rear = NULL;
//     return q;
// }

// void enqueue(struct Queue *q, int data)
// {
//     struct Node *temp = newNode(data);
//     if (q->rear == NULL)
//     {
//         q->front = q->rear = temp;
//         return;
//     }
//     q->rear->next = temp;
//     q->rear = temp;
// }

// int dequeue(struct Queue *q)
// {
//     if (q->front == NULL)
//         return -1;

//     struct Node *temp = q->front;
//     int data = temp->data;
//     q->front = q->front->next;

//     if (q->front == NULL)
//         q->rear = NULL;

//     free(temp);
//     return data;
// }

// void displayQueue(struct Queue *q)
// {
//     struct Node *temp = q->front;
//     if (temp == NULL)
//     {
//         printf("Queue is empty\n");
//         return;
//     }

//     printf("Queue: ");
//     while (temp)
//     {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main()
// {
//     printf("Nidhi Bisen\n0801IT243D03\n\n");

//     struct Queue *q = createQueue();
//     enqueue(q, 10);
//     enqueue(q, 20);
//     enqueue(q, 30);

//     displayQueue(q);

//     printf("Dequeued: %d\n", dequeue(q));
//     displayQueue(q);

//     enqueue(q, 40);
//     displayQueue(q);

//     return 0;
// }

// =================== Q-18================

// #include <stdio.h>
// #include <stdlib.h>

// #define SIZE 5

// struct CircularQueue {
//     int items[SIZE];
//     int front, rear;
// };

// void initQueue(struct CircularQueue* q) {
//     q->front = -1;
//     q->rear = -1;
// }

// int isFull(struct CircularQueue* q) {
//     if ((q->front == 0 && q->rear == SIZE - 1) || (q->rear == (q->front - 1) % SIZE)) {
//         return 1;
//     }
//     return 0;
// }

// int isEmpty(struct CircularQueue* q) {
//     if (q->front == -1) {
//         return 1;
//     }
//     return 0;
// }

// void insert(struct CircularQueue* q, int value) {
//     if (isFull(q)) {
//         printf("Queue is full!\n");
//         return;
//     }

//     if (q->front == -1) {
//         q->front = 0;
//     }

//     q->rear = (q->rear + 1) % SIZE;
//     q->items[q->rear] = value;
//     printf("Inserted %d\n", value);
// }

// void delete(struct CircularQueue* q) {
//     if (isEmpty(q)) {
//         printf("Queue is empty!\n");
//         return;
//     }

//     int value = q->items[q->front];

//     if (q->front == q->rear) {
//         q->front = -1;
//         q->rear = -1;
//     } else {
//         q->front = (q->front + 1) % SIZE;
//     }

//     printf("Deleted %d\n", value);
// }

// void display(struct CircularQueue* q) {
//     if (isEmpty(q)) {
//         printf("Queue is empty!\n");
//         return;
//     }

//     printf("Queue: ");
//     int i = q->front;

//     while (i != q->rear) {
//         printf("%d ", q->items[i]);
//         i = (i + 1) % SIZE;
//     }
//     printf("%d\n", q->items[q->rear]);
// }

// int main() {
//      printf("Nidhi Bisen\n0801IT243D03\n\n");

//     struct CircularQueue q;
//     initQueue(&q);

//     insert(&q, 10);
//     insert(&q, 20);
//     insert(&q, 30);
//     insert(&q, 40);
//     insert(&q, 50);

//     display(&q);

//     delete(&q);
//     delete(&q);

//     display(&q);

//     insert(&q, 60);
//     insert(&q, 70);

//     display(&q);

//     return 0;
// }

// ================= Q-19===============

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// struct CircularQueue
// {
//     struct Node *front, *rear;
// };

// struct Node *createNode(int value)
// {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->next = NULL;
//     return newNode;
// }

// struct CircularQueue *createQueue()
// {
//     struct CircularQueue *queue = (struct CircularQueue *)malloc(sizeof(struct CircularQueue));
//     queue->front = queue->rear = NULL;
//     return queue;
// }

// void enqueue(struct CircularQueue *queue, int value)
// {
//     struct Node *newNode = createNode(value);
//     if (queue->rear == NULL)
//     {
//         queue->front = queue->rear = newNode;
//         queue->rear->next = queue->front;
//     }
//     else
//     {
//         queue->rear->next = newNode;
//         queue->rear = newNode;
//         queue->rear->next = queue->front;
//     }
//     printf("Enqueued %d\n", value);
// }

// int dequeue(struct CircularQueue *queue)
// {
//     if (queue->front == NULL)
//     {
//         printf("Queue is empty, cannot dequeue.\n");
//         return -1;
//     }
//     int value;
//     struct Node *temp = queue->front;

//     if (queue->front == queue->rear)
//     {
//         value = queue->front->data;
//         free(queue->front);
//         queue->front = queue->rear = NULL;
//     }
//     else
//     {
//         value = queue->front->data;
//         queue->front = queue->front->next;
//         queue->rear->next = queue->front;
//         free(temp);
//     }
//     printf("Dequeued %d\n", value);
//     return value;
// }

// void displayQueue(struct CircularQueue *queue)
// {
//     if (queue->front == NULL)
//     {
//         printf("Queue is empty.\n");
//         return;
//     }
//     struct Node *temp = queue->front;
//     printf("Queue elements are: ");
//     do
//     {
//         printf("%d ", temp->data);
//         temp = temp->next;
//     } while (temp != queue->front);
//     printf("\n");
// }

// int main()
// {
//     printf("Nidhi Bisen\n0801IT243D03\n\n");

//     struct CircularQueue *queue = createQueue();

//     enqueue(queue, 10);
//     enqueue(queue, 20);
//     enqueue(queue, 30);
//     enqueue(queue, 40);

//     displayQueue(queue);

//     dequeue(queue);
//     displayQueue(queue);

//     enqueue(queue, 50);
//     displayQueue(queue);

//     return 0;
// }

// ==================== Q-20 ===================

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     int priority;
//     struct Node *next;
// };

// // Function to create a new node
// struct Node *createNode(int value, int priority)
// {
//     struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->priority = priority;
//     newNode->next = NULL;
//     return newNode;
// }

// // Function to enqueue a node based on priority
// void enqueue(struct Node **head, int value, int priority)
// {
//     struct Node *newNode = createNode(value, priority);

//     if (*head == NULL || (*head)->priority > priority)
//     {
//         newNode->next = *head;
//         *head = newNode;
//     }
//     else
//     {
//         struct Node *temp = *head;
//         while (temp->next != NULL && temp->next->priority <= priority)
//         {
//             temp = temp->next;
//         }
//         newNode->next = temp->next;
//         temp->next = newNode;
//     }
//     printf("Enqueued %d with priority %d\n", value, priority);
// }

// // Function to dequeue the highest-priority element
// int dequeue(struct Node **head)
// {
//     if (*head == NULL)
//     {
//         printf("Priority Queue is empty, cannot dequeue.\n");
//         return -1;
//     }

//     int value = (*head)->data;
//     struct Node *temp = *head;
//     *head = (*head)->next;
//     free(temp);
//     printf("Dequeued %d\n", value);
//     return value;
// }

// // Function to display the current state of the priority queue
// void displayQueue(struct Node *head)
// {
//     if (head == NULL)
//     {
//         printf("Priority Queue is empty.\n");
//         return;
//     }

//     struct Node *temp = head;
//     printf("Priority Queue elements (value, priority): ");
//     while (temp != NULL)
//     {
//         printf("(%d, %d) ", temp->data, temp->priority);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// int main()
// {
//   printf("Nidhi Bisen\n0801IT243D03\n\n");

//     struct Node *priorityQueue = NULL;

//     enqueue(&priorityQueue, 10, 2);
//     enqueue(&priorityQueue, 30, 1);
//     enqueue(&priorityQueue, 20, 3);
//     enqueue(&priorityQueue, 40, 0);

//     displayQueue(priorityQueue);

//     dequeue(&priorityQueue);
//     displayQueue(priorityQueue);

//     enqueue(&priorityQueue, 50, 1);
//     displayQueue(priorityQueue);

//     return 0;
// }

// =========================== Q-20 =======================

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;
// };

// // Function to create a new node
// struct Node *newNode(int data)
// {
//     struct Node *node = (struct Node *)malloc(sizeof(struct Node));
//     node->data = data;
//     node->left = NULL;
//     node->right = NULL;
//     return node;
// }

// // Pre-order traversal: Root -> Left -> Right
// void preOrder(struct Node *node)
// {
//     if (node == NULL)
//     {
//         return;
//     }
//     printf("%d ", node->data);
//     preOrder(node->left);
//     preOrder(node->right);
// }

// // In-order traversal: Left -> Root -> Right
// void inOrder(struct Node *node)
// {
//     if (node == NULL)
//     {
//         return;
//     }
//     inOrder(node->left);
//     printf("%d ", node->data);
//     inOrder(node->right);
// }

// // Post-order traversal: Left -> Right -> Root
// void postOrder(struct Node *node)
// {
//     if (node == NULL)
//     {
//         return;
//     }
//     postOrder(node->left);
//     postOrder(node->right);
//     printf("%d ", node->data);
// }

// int main()
// {
//    printf("Nidhi Bisen\n0801IT243D03\n\n");

//     struct Node *root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(5);

//     printf("Pre-order traversal: ");
//     preOrder(root);
//     printf("\nIn-order traversal: ");
//     inOrder(root);
//     printf("\nPost-order traversal: ");
//     postOrder(root);

//     return 0;
// }

// ================ Q-28 ==============
// #include <stdio.h>

// void merge(int arr[], int l, int m, int r) {
//     int n1 = m - l + 1;
//     int n2 = r - m;
//     int L[n1], R[n2];
//     for (int i = 0; i < n1; i++)
//         L[i] = arr[l + i];
//     for (int j = 0; j < n2; j++)
//         R[j] = arr[m + 1 + j];
//     int i = 0, j = 0, k = l;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) {
//             arr[k] = L[i];
//             i++;
//         } else {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }
//     while (i < n1) {
//         arr[k] = L[i];
//         i++;
//         k++;
//     }
//     while (j < n2) {
//         arr[k] = R[j];
//         j++;
//         k++;
//     }
// }

// void mergeSort(int arr[], int l, int r) {
//     if (l < r) {
//         int m = l + (r - l) / 2;
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);
//         merge(arr, l, m, r);
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//      printf("Nidhi Bisen\n0801IT243D03\n\n");
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int arr_size = sizeof(arr) / sizeof(arr[0]);
//     printf("Original array: \n");
//     printArray(arr, arr_size);
//     mergeSort(arr, 0, arr_size - 1);
//     printf("Sorted array: \n");
//     printArray(arr, arr_size);
//     return 0;
// }



// ================ Q27=====================

// #include <stdio.h>

// void insertionSort(int arr[], int n) {
//     int i, key, j;
//     for (i = 1; i < n; i++) {
//         key = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] > key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//       printf("Nidhi Bisen\n0801IT243D03\n\n");
//     int arr[] = {12, 11, 13, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Original array: \n");
//     printArray(arr, n);
//     insertionSort(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }
// =============Q26==========
// #include <stdio.h>

// void swap(int *xp, int *yp) {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(&arr[j], &arr[j + 1]);
//             }
//         }
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//      printf("Nidhi Bisen\n0801IT243D03\n\n");

//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     printf("Unsorted array: \n");
//     printArray(arr, n);
//     bubbleSort(arr, n);
//     printf("Sorted array: \n");
//     printArray(arr, n);
//     return 0;
// }

// ====================== Q-25==========
// #include <stdio.h>

// void swap(int *xp, int *yp) {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }

// void selectionSort(int arr[], int n) {
//     int i, j, min_idx;
//     for (i = 0; i < n - 1; i++) {
//         min_idx = i;
//         for (j = i + 1; j < n; j++) {
//             if (arr[j] < arr[min_idx]) {
//                 min_idx = j;
//             }
//         }
//         swap(&arr[min_idx], &arr[i]);
//     }
// }

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main() {
//       printf("Nidhi Bisen\n0801IT243D03\n\n");

//     int n;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++) {
//         printf("Element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     printf("Array before sorting: ");
//     printArray(arr, n);
//     selectionSort(arr, n);
//     printf("Array after sorting: ");
//     printArray(arr, n);
//     return 0;
// }


// ============ Q-24==============
// #include <stdio.h>

// int binarySearch(int arr[], int size, int target) {
//     int left = 0, right = size - 1;
//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == target) {
//             return mid;
//         }
//         if (arr[mid] < target) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }
//     return -1;
// }

// int main() {
//       printf("Nidhi Bisen\n0801IT243D03\n\n");
//     int n, target;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter the sorted elements of the array:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to search for: ");
//     scanf("%d", &target);
//     int result = binarySearch(arr, n, target);
//     if (result != -1) {
//         printf("Element found at index %d\n", result);
//     } else {
//         printf("Element not found in the array\n");
//     }
//     return 0;
// }


// =============== Q 22===================

// #include <stdio.h>
// #include <stdlib.h>

// struct Node {
//     int data;
//     struct Node* left;
//     struct Node* right;
// };

// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = data;
//     newNode->left = NULL;
//     newNode->right = NULL;
//     return newNode;
// }

// struct Node* insert(struct Node* root, int data) {
//     if (root == NULL) {
//         return createNode(data);
//     }
//     if (data < root->data) {
//         root->left = insert(root->left, data);
//     } else if (data > root->data) {
//         root->right = insert(root->right, data);
//     }
//     return root;
// }

// void preorderTraversal(struct Node* root) {
//     if (root != NULL) {
//         printf("%d ", root->data);
//         preorderTraversal(root->left);
//         preorderTraversal(root->right);
//     }
// }

// void inorderTraversal(struct Node* root) {
//     if (root != NULL) {
//         inorderTraversal(root->left);
//         printf("%d ", root->data);
//         inorderTraversal(root->right);
//     }
// }

// void postorderTraversal(struct Node* root) {
//     if (root != NULL) {
//         postorderTraversal(root->left);
//         postorderTraversal(root->right);
//         printf("%d ", root->data);
//     }
// }

// int main() {
//      printf("Nidhi Bisen\n0801IT243D03\n\n");
//     struct Node* root = NULL;
//     int n, i, data;
//     printf("Enter number of elements to insert into BST: ");
//     scanf("%d", &n);
//     for (i = 0; i < n; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &data);
//         root = insert(root, data);
//     }
//     printf("\nPre-order Traversal: ");
//     preorderTraversal(root);
//     printf("\nIn-order Traversal: ");
//     inorderTraversal(root);
//     printf("\nPost-order Traversal: ");
//     postorderTraversal(root);
//     return 0;
// }


// =================== Q-8=============

// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node* next;
//     struct node* prev;
// } *start = NULL;

// void display() {
//     struct node *temp = start;
//     if (start == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     do {
//         printf("%d -><- ", temp->data);
//         temp = temp->next;
//     } while (temp != start);
//     printf("%d\n", temp->data);
// }

// void insert1() { // Insert at the beginning
//     struct node* newnode, *last;
//     newnode = (struct node*)malloc(sizeof(struct node));
//     printf("\nEnter data: ");
//     scanf("%d", &newnode->data);
//     if (start == NULL) {
//         start = newnode;
//         newnode->next = newnode;
//         newnode->prev = newnode;
//     } else {
//         last = start->prev;
//         last->next = newnode;
//         newnode->prev = last;
//         newnode->next = start;
//         start->prev = newnode;
//         start = newnode;
//     }
//     display();
// }

// void insert2() { // Insert at the end
//     struct node* newnode, *last;
//     newnode = (struct node*)malloc(sizeof(struct node));
//     printf("\nEnter data: ");
//     scanf("%d", &newnode->data);
//     if (start == NULL) {
//         start = newnode;
//         newnode->next = newnode;
//         newnode->prev = newnode;
//     } else {
//         last = start->prev;
//         last->next = newnode;
//         newnode->prev = last;
//         newnode->next = start;
//         start->prev = newnode;
//     }
//     display();
// }

// void insert3() { // Insert at specific position
//     int n, i = 1;
//     struct node* newnode, *temp = start;
//     newnode = (struct node*)malloc(sizeof(struct node));
//     printf("\nEnter data: ");
//     scanf("%d", &newnode->data);
//     printf("Enter position from starting node where you want to insert: ");
//     scanf("%d", &n);
//     if (n == 1) {
//         insert1();
//     } else {
//         while (i < n - 1 && temp->next != start) {
//             temp = temp->next;
//             i++;
//         }
//         newnode->next = temp->next;
//         newnode->prev = temp;
//         temp->next->prev = newnode;
//         temp->next = newnode;
//     }
//     display();
// }

// void delete1() { // Delete the first node
//     struct node* temp = start;
//     if (start == NULL) {
//         printf("Linked list is empty!\n");
//         return;
//     }
//     start->prev->next = start->next;
//     start->next->prev = start->prev;
//     start = start->next;
//     free(temp);
//     display();
// }

// void delete2() { // Delete the last node
//     struct node* temp = start;
//     if (start == NULL) {
//         printf("Linked list is empty!\n");
//         return;
//     }
//     temp = start->prev;
//     temp->prev->next = start;
//     start->prev = temp->prev;
//     free(temp);
//     display();
// }

// void delete3() { // Delete node from specific location
//     int n, i = 1;
//     struct node* temp = start;
//     if (start == NULL) {
//         printf("Linked list is empty!\n");
//         return;
//     }
//     printf("Enter position from starting node where you want to delete node: ");
//     scanf("%d", &n);
//     if (n == 1) {
//         delete1();
//     } else {
//         while (i < n && temp->next != start) {
//             temp = temp->next;
//             i++;
//         }
//         temp->prev->next = temp->next;
//         temp->next->prev = temp->prev;
//         free(temp);
//     }
//     display();
// }

// void create() {
//     int n, m, k = 0;
//     struct node *newnode, *last;
//     do {
//         newnode = (struct node*)malloc(sizeof(struct node));
//         printf("\nEnter data: ");
//         scanf("%d", &newnode->data);
//         newnode->next = newnode;
//         newnode->prev = newnode;
//         if (start == NULL) {
//             start = newnode;
//             last = newnode;
//         } else {
//             newnode->prev = last;
//             newnode->next = start;
//             start->prev = newnode;
//             last->next = newnode;
//             last = newnode;
//         }
//         printf("\nPress 1 (continue) 2 (end): ");
//         scanf("%d", &n);
//     } while (n != 2);

//     do {
//         printf("\nEnter the operation you want to perform: \n");
//         printf("1. Insert node at beginning\n");
//         printf("2. Insert node at last\n");
//         printf("3. Insert node at specific location\n");
//         printf("4. Delete first node\n");
//         printf("5. Delete last node\n");
//         printf("6. Delete node from specific location\n");
//         printf("7. Print linked list\n");
//         printf("8. Exit\n");
//         scanf("%d", &m);
//         switch (m) {
//             case 1: insert1(); break;
//             case 2: insert2(); break;
//             case 3: insert3(); break;
//             case 4: delete1(); break;
//             case 5: delete2(); break;
//             case 6: delete3(); break;
//             case 7: display(); break;
//             case 8: k = 8; break;
//             default: printf("Invalid option!\n");
//         }
//     } while (k != 8);
// }

// int main() {
//     create();
//     return 0;
// }


// =============== Q -9

// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node* next;
//     struct node* prev;
// } *start1 = NULL, *start2 = NULL;

// void insert_at_beginning(struct node **start) {
//     struct node *new_node = (struct node*)malloc(sizeof(struct node));
//     printf("Enter data: ");
//     scanf("%d", &new_node->data);
//     if (*start == NULL) {
//         *start = new_node;
//         new_node->next = new_node->prev = NULL;
//     } else {
//         new_node->next = *start;
//         (*start)->prev = new_node;
//         *start = new_node;
//         new_node->prev = NULL;
//     }
// }

// void insert_at_end(struct node **start) {
//     struct node *new_node, *temp = *start;
//     new_node = (struct node*)malloc(sizeof(struct node));
//     printf("Enter data: ");
//     scanf("%d", &new_node->data);
//     if (*start == NULL) {
//         *start = new_node;
//         new_node->next = new_node->prev = NULL;
//     } else {
//         while (temp->next != NULL)
//             temp = temp->next;
//         temp->next = new_node;
//         new_node->prev = temp;
//         new_node->next = NULL;
//     }
// }

// void display(struct node *start) {
//     struct node *temp = start;
//     if (start == NULL) {
//         printf("List is empty.\n");
//         return;
//     }
//     while (temp != NULL) {
//         printf("%d -><- ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// void merge(struct node **start1, struct node **start2) {
//     if (*start1 == NULL) {
//         *start1 = *start2;
//         return;
//     }
//     if (*start2 == NULL) {
//         return;
//     }
//     struct node *temp = *start1;
//     while (temp->next != NULL)
//         temp = temp->next;
//     temp->next = *start2;
//     (*start2)->prev = temp;
// }

// void create(struct node **start) {
//     int choice;
//     do {
//         insert_at_end(start);
//         printf("Press 1 (continue) 2 (end): ");
//         scanf("%d", &choice);
//     } while (choice != 2);
// }

// int main() {
//     printf("Enter the data for 1st linked list:\n");
//     create(&start1);
//     display(start1);
    
//     printf("Enter the data for 2nd linked list:\n");
//     create(&start2);
//     display(start2);
    
//     printf("Merging the two linked lists...\n");
//     merge(&start1, &start2);
//     printf("Merged Linked List: ");
//     display(start1);
    
//     return 0;
// }

// ====== =========== Q-10================

// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node* next;
// } *start = NULL;

// int main() {
//     int n = 1, count = 0, m;
//     struct node *newnode, *last;

//     // Input loop for creating the linked list
//     do {
//         newnode = (struct node*)malloc(sizeof(struct node));
//         printf("\nEnter data: ");
//         scanf("%d", &newnode->data);
//         newnode->next = NULL; // Set next pointer to NULL

//         if (start == NULL) {
//             start = newnode;
//             last = newnode;
//         } else {
//             last->next = newnode;
//             last = newnode;
//         }

//         printf("Enter 1 to continue and 2 to terminate: ");
//         scanf("%d", &n);
//         count++; // Count number of nodes
//     } while (n != 2);

//     // Display the linked list
//     struct node *temp = start;
//     printf("\nThe linked list is: ");
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");

//     // Print the total number of nodes
//     printf("Total number of nodes in the linked list: %d\n", count);

//     // Finding the middle element
//     if (count % 2 != 0) {
//         m = count / 2 + 1; // For odd number of nodes, middle is the center element
//     } else {
//         m = count / 2; // For even number of nodes, choose the first of the two middle elements
//     }
//     printf("The middle element is at position: %d\n", m);

//     // Traverse to the middle element
//     struct node *ptr = start;
//     for (int i = 1; i < m; i++) {
//         ptr = ptr->next;
//     }

//     // Print the middle element
//     printf("The middle element is: %d\n", ptr->data);

//     return 0;
// }

// ============ Q-11===============

// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node* next;
// } *start = NULL;

// int main() {
//     int n = 1, count = 0;
//     struct node *newnode, *last;

//     // Input loop to create the linked list
//     do {
//         newnode = (struct node*)malloc(sizeof(struct node));
//         printf("\nEnter data: ");
//         scanf("%d", &newnode->data);
//         newnode->next = NULL;

//         if (start == NULL) {
//             start = newnode;
//             last = newnode;
//         } else {
//             last->next = newnode;
//             last = newnode;
//         }

//         printf("Enter 1 to continue and 2 to terminate: ");
//         scanf("%d", &n);
//         count++;
//     } while (n != 2);

//     // Reverse the linked list
//     struct node *prev = NULL, *current = start, *next = NULL;
//     while (current != NULL) {
//         next = current->next;
//         current->next = prev;
//         prev = current;
//         current = next;
//     }
//     start = prev; // Update start to the new head of the reversed list

//     // Display the reversed linked list
//     struct node *temp = start;
//     printf("\nReversed linked list: ");
//     while (temp != NULL) {
//         printf("%d->", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");

//     return 0;
// }


// ========== Q-12=====================
// #include <stdio.h>
// #define size 100

// struct stack {
//     int data[size];
//     int top;
// } s;

// void push() {
//     int k = 1; // Loop control for pushing multiple elements
//     while (k) {
//         if (s.top == size) { // Check if the stack is full
//             printf("Overflow!!\n");
//         } else {
//             int x;
//             printf("Enter data: ");
//             scanf("%d", &x);
//             s.data[s.top] = x; // Insert element at the top
//             s.top++; // Move top index up
//         }
//         printf("Press 1 to enter more data or 0 to exit: ");
//         scanf("%d", &k); // Continue or exit the loop
//     }
// }

// void pop() {
//     if (s.top == 0) { // If top is 0, stack is empty
//         printf("Underflow!!\n");
//     } else {
//         s.top--; // Move top index down (pop the element)
//         printf("Popped element: %d\n", s.data[s.top]);
//     }
// }

// void print() {
//     if (s.top == 0) {
//         printf("Stack is empty.\n");
//     } else {
//         printf("Stack elements are:\n");
//         for (int i = s.top - 1; i >= 0; i--) {
//             printf("%d\n", s.data[i]); // Print elements from top to bottom
//         }
//     }
// }

// int main() {
//     s.top = 0; // Initialize stack top to 0
//     int n, m = 1;
//     printf("1. Insert\n2. Pop\n3. Print\n4. Exit\n");
//     while (m) {
//         printf("\nEnter your choice: ");
//         scanf("%d", &n);
//         switch (n) {
//             case 1:
//                 push();
//                 break;
//             case 2:
//                 pop();
//                 break;
//             case 3:
//                 print();
//                 break;
//             case 4:
//                 m = 0; // Exit loop
//                 break;
//             default:
//                 printf("Invalid choice!\n");
//         }
//     }
//     return 0;
// }


// ============== Q-13==============

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
} *top = NULL;

void push() {
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    
    if (top == NULL) {
        top = newnode;
    } else {
        newnode->next = top;
        top = newnode;
    }
}

void pop() {
    if (top == NULL) {
        printf("Stack Empty!!\n");
    } else {
        struct node* ptr = top;
        top = top->next;
        free(ptr);
        printf("Popped from stack.\n");
    }
}

void print() {
    if (top == NULL) {
        printf("Stack is empty.\n");
    } else {
        struct node* temp = top;
        printf("Stack elements are:\n");
        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    int n, m = 1;
    printf("1. Insert\n2. Pop\n3. Print\n4. Exit\n");
    while (m) {
        printf("\nEnter your choice: ");
        scanf("%d", &n);
        switch (n) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: print(); break;
            case 4: m = 0; break; // Exit the loop
            default: printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}
