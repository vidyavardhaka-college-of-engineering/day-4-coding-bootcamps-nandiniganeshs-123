//Write a C program to get the integer array from the user and print it in the given order.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements in the given order with space separated.
//Example:
//Input:
//5 
//1 5 10 50 123
//Output: 
//1 5 10 50 123
#include<stdio.h> 

int main()
{
   //Declare all the variables[N, array a, i] used in the code
   int a[10], i,n;
   
   //Read the Value of N using scanf statement
   printf("The size of array: ");
   scanf("%d",&n);
   printf("enter %d elements in the array: ",n);
   //Read the array elements using for loop and scanf statment
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   printf("\n the elements in the array: ");

   //Print the array elements in using printf statement
   for(i=0;i<n;i++)
   {
     printf(" %d", a[i] );
   }
  

   
   return 0; 
}
