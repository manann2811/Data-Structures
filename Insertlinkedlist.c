#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
int main()
{
    struct node *head, *first, *second;
    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    head = first;
    ptr = first;
    first->data=45;
    first->link=second;
    second->data=98;
    second->link=NULL;
    int n;
    printf("\nEnter the number to be inserted at the beginning : ");
    scanf("%d", &n);

    struct node* new=(struct node*)malloc(sizeof(struct node));

    new->data=n;
    new->link=head;
    head=new;
    ptr=new;

    while(ptr!=NULL)
    {
        printf("%d \n", ptr->data);
        ptr=ptr->link;
    }
    return 0;
}