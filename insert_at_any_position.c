#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void main()
{
    int pos, n;
    struct node *head, *first, *second, *third, *fourth, *ptr, *newnode;

    printf("Enter the position to enter the node : ");
    scanf("%d", &pos);

     printf("Enter the number to be inserted : ");
    scanf("%d", &n);

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    newnode = (struct node *)malloc(sizeof(struct node));
    
    head = first;
    first->data=7;
    first->next = second;
    second->data = 8;
    second->next = third;
    third->data = 9;
    third->next = fourth;
    fourth->data=12;
    fourth->next = NULL;
    newnode->data = n;
    newnode->next = NULL;

    if(pos<=5){
    ptr=head;
    pos--;

    while(pos!=1){
        ptr=ptr->next;
        pos--;
    }
    newnode->next=ptr->next;
    ptr->next=newnode;

    ptr=head;
    while(ptr!=NULL)
    {
        printf("Elements are: %d\n", ptr->data);
        ptr = ptr->next;
    }
    }
    else{
        printf("Invalid Position!");
    }
}