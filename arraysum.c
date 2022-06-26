#include<stdio.h>

int main()
{
    float avg;
    int sum=0, a[100], i, n;
 
    printf("Enter no of elements: ");
    scanf("%d", &n);
 
    printf("Enter elements:\n");
    for(i=0; i<n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    avg = sum/n;
    printf("Sum is %d\n", sum);
    printf("Average is %f", avg);
 
    return 0;
}