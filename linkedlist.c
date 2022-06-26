#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void main()
{
    struct node *head, *first, *second, *third, *fourth, *fifth, *sixth;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    sixth = (struct node *)malloc(sizeof(struct node));

    head = first;
    first->data=10;
    first->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = fourth;
    fourth->data=40;
    fourth->next = fifth;
    fifth->data = 50;
    fifth->next = sixth;
    sixth->data=60;
    sixth->next = NULL;

    while(head!=NULL)
    {
        printf("Data of Nodes are: %d\n", head->data);
        head = head->next;
    }
}