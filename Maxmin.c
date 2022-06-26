#include <stdio.h>
int main()
{
  int a[100],n,max,min;
  
  printf("Enter no. of elements : ");
  scanf("%d",&n);
  
  printf("Enter the elements\n");
  for(int i=0;i<n;i++){
    printf("Enter element %d : ", i+1);
    scanf("%d",&a[i]);
  }
  
  max=a[0]; 
  min=a[0]; 
  
  for(int j=1;j<n;j++){
    if(max<a[j])
    {
    max=a[j];
    }
    else if(min>a[j])
    {
    min=a[j];
    }
  }
  printf("Maximum value = %d\n",max);
  printf("Minimum value = %d",min);
  return 0;
}