//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[10], n, i,large,small;
    printf("size of array:");
    scanf("%d", &n);

    printf("the elements are :");
    for(i = 0; i < n; i++)
       
      {
        scanf("%d", &arr[i]);
      }
     large=small=arr[0];
     for (i=1;i<n;++i)
     {
       if(arr[i]>large)
       {
         large=arr[i];
       }
       if(arr[i]<small)
       {
         small=arr[i];
       }
     }
     printf("the largest element in array is %d\n",large);
      printf("the least element in array is %d",small);

     
    //Write your code here
  
    return 0;
}
