#include <stdio.h>
int main()
{
    int arr[100], pos, n;

    printf("Enter number of elements in array : ");
    scanf("%d", &n);

    printf("Enter the elements : ");

    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the location to delete element : ");
    scanf("%d", &pos);

    if (pos<n+1){
        for (int i=pos-1; i<n-1; i++){
            arr[i] = arr[i+1];
        }
        printf("Array after deletion:\n");
        for (int i=0; i<n-1; i++){
            printf("%d\n", arr[i]);
        }
    }
    else{
    printf("Deletion not possible.\n");
    }
    return 0;
}