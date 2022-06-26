#include <stdio.h>

int top = -1;
int num;
int n;
int stack[100];


void push()
{
    if(top>=n-1)
    {
        printf("\nOVERFLOW!");
        
    }
    else
    {
        printf("\nEnter a value to be pushed:");
        scanf("%d",&num);
        top++;
        stack[top]=num;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("\n Stack is UNDERFLOW");
    }
    else
    {
        printf("\nThe popped elements is %d",stack[top]);
        top--;
    }
}

void peek()
{
    if(top ==-1)
    {
        printf("The stack is empty");
    }
    else
    {
        printf("Element at the top is %d", stack[top]);
    }
}
void display()
{
    if(top!=-1)
    {
        printf("\n The elements in STACK are \n");
        for(int i=top; i>=0; i--)
            printf("\n%d",stack[i]);
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}

int main()
{
    int choice;
    printf("\nEnter the size of Stack: ");
    scanf("%d",&n);
    do
    {
        printf("\nEnter the Choice:\n1.Push \n2.Pop \n3.Peek \n4.Display \n5.Exit \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                peek();
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5:
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
    while(choice!=0);
    return 0;
}