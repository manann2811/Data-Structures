#include <stdio.h>
#define MAX 100

int rear = -1;
int front  = -1;
int queue[MAX];
void insertion()
{
    int num;
    if(rear == MAX-1)
    printf("\nQueue is overflow!!");
    else
    {
        if(front == -1)
            front = 0;
            printf("Enter the element to insert: ");
            scanf("%d", &num);
            rear = rear+1;
            queue[rear] = num;
    }
}

void deletion()
{
    if(front == -1 || front>rear)
    {
        printf("\nQueue is underflow!!");
    }
    else
    {
        printf("\nThe deleted element is : %d", queue[front]);
        front = front +1;
    }
}

void display()
{
    if(front == -1)
    {
        printf("\nThe queue is empty!");
    }
    else
    {
        printf("\nThe elements in queue are:\n");
        for(int i = front; i<=rear; i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}
int main()
{
    int choice;
    int n;
    printf("\nEnter the size of queue: ");
    scanf("%d",&n);
    do
    {
        printf("\nEnter the Choice:\n1.insertion \n2.deletion \n3.display \n4.Exit \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                insertion();
                break;
            }
            case 2:
            {
                deletion();
                break;
            }
            case 3:
            {
                display();
                break;
            }
    
            case 4:
            {
                printf("END!");
                break;
            }
            default:
            {
                printf ("\nINVALID CHOICE");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}