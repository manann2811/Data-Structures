#include<stdio.h>

int bubble_sort (int arr[], int n)
{
  int temp;
  for (int i=0; i<n; i++){
      for (int j=0; j<n-i-1; j++){
          if(arr[j]>arr[j+1]){
              temp = arr[j];
	          arr[j] = arr[j+1];
	          arr[j+1] = temp;
              }
        }
    }
    printf ("\nAfter sorting the array is : ");
    for (int i=0; i<n; i++){
        printf (" %d", arr[i]);
    }
}


int main ()
{
  int n;
  printf ("Enter the size of the array : ");
  scanf ("%d", &n);
  int arr[n];

  printf ("Enter %d numbers: ", n);
  for (int i=0; i<n; i++){
    scanf ("%d", &arr[i]);
  }  
  printf ("\nBefore sorting the array is : ");
  for (int i=0; i<n; i++){
      printf (" %d", arr[i]);
  }
  bubble_sort (arr, n);
  return 0;
}