#include <stdio.h>

int main()
{
    int n;
    int pos;
    int num;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    
    printf("Enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    n++;
    printf("Enter the position to insert an element\n");
    scanf("%d", &pos);
    
    printf("Enter the number to insert\n");
    scanf("%d", &num);
    
    if(pos<n+1){
        for(int i =n-1; i>=pos-1; i--){
            arr[i] = arr[i-1];
        }
        arr[pos-1]= num;
        
        printf("Array after insertion:\n");
        for(int i=0; i<n; i++){
            printf("%d\n",arr[i]); 
        }
        
    }
    else{
        printf("Invalid position");
    }

    return 0;
}