#include<stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*next;
};
typedef struct node node;

void linkedListTravarse(struct node*ptr)
{
    while (ptr!=NULL)
    {
        /* code */
         printf("Element are :%d\n",ptr->data);
        ptr=ptr->next;
    }
    
   
}
// insertAtFirst -------------------------------
node*insertAtFirst(struct node*head,int data){

struct node *ptr=(struct node*)malloc(sizeof(struct node));
ptr->next=head;
ptr->data=data;

}
int main(){


struct node *head;
struct node *second;
struct node *third;

// allocation mamory from node in the link list


head=(struct node*) malloc(sizeof(struct node)); 
second=(struct node*) malloc(sizeof(struct node));
third=(struct node*) malloc(sizeof(struct node));

// link first and second nodes

head->data=7;
head->next=second;
// link second and third nodes

second->data=55;
second->next=third;
// terminet the last node

third->data=76;
third->next=NULL;

// linkedListTravarse(head);
head=insertAtFirst(head,56);
linkedListTravarse(head);




return 0;
}