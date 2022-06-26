#include <stdio.h>
int main ()
{
  int first, last, middle, num;
  int n;

  printf ("Enter size of the array : ");
  scanf ("%d", &n);

  int arr[n];

  printf ("Enter the numbers : ");

  for (int i = 0; i < n; i++)
    scanf ("%d", &arr[i]);

  printf ("Enter the number to search : ");
  scanf ("%d", &num);

  first = 0;
  last = n - 1;
  middle = (first + last) / 2;

  while (first <= last)
    {
      if (arr[middle] < num)
        first = middle + 1;
      else if (arr[middle] == num){
        printf ("%d found at position %d.\n", num, middle + 1);
        break;
        }
      else
        last = middle - 1;
        middle = (first + last) / 2;
    }
    if (first > last)
      printf ("Number not found!");

    return 0;
}