#include <stdio.h>

int linear_search(int arr[],int n, int num) 
{
   for (int i=0; i<n; i++){
       if (arr[i] == num){
           return i;
        }  
   }
    return -1;  
}

int main()
{
   int arr[20], num, n, pos;
   printf("Enter the number of elements : ");
   scanf("%d", &n);
   printf("Enter the numbers : ");
 
   for (int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
   }
   
   printf("Enter the number to search : ");
   scanf("%d", &num);
 
   pos = linear_search(arr, n, num);
   if(pos==-1)
   printf("%d is not present in the array!",num);
   else
   printf("%d is present at location %d.\n", num, pos+1);
   return 0;
}