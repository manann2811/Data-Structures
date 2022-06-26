#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
struct node *head = NULL;
struct node *insert_at_end( struct node *head,int num)
{
 struct node *newnode, *temp;
 newnode = (struct node *) malloc (sizeof (struct node));
 newnode->data = num;
 newnode->next = NULL;
 temp = head;
 
 while(temp->next != NULL)
 {temp = temp->next;
 }
 temp->next = newnode;
 
 return head;
}
void displayList()
{
 struct node *temp;
 {
 temp = head;
 while(temp != NULL)
 {
 printf("%d\n", temp->data); 
 temp = temp->next; 
 }
 }
}
int main ()
{
 struct node *first, *second, *third;
 int n;
 
 first = (struct node *) malloc (sizeof (struct node));
second = (struct node *) malloc (sizeof (struct node));
 third = (struct node *) malloc (sizeof (struct node));
 head = first;
 first->data = 10;
 first->next = second;
 second->data = 20;
 second->next = third;
 third->data = 30;
 third->next = NULL;
 displayList();
 
 printf ("\nEnter the element to be inserted: ");
 scanf ("%d", &n);
 
 head = insert_at_end (head, n);
 displayList();
 
 return 0;
}