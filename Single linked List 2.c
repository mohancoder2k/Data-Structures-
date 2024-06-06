#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
} *head;

void create(int nodes) {
    struct node *temp, *current;
    head = malloc(sizeof(struct node));
    int data;

    if (head == NULL) {
        printf("Memory not allocated.\n");
        return;
    }

    printf("Enter the data for the first node:\n");
    scanf("%d", &data);
    head->data = data;
    head->next = NULL;

    current = head;
    for (int i = 1; i < nodes; i++) {
        printf("Enter the data for node %d:\n", i + 1);
        scanf("%d", &data);
        temp = malloc(sizeof(struct node));
        if (temp == NULL) {
            printf("Memory not allocated.\n");
            return;
        }
        temp->data = data;
        temp->next = NULL;
        current->next = temp;
        current = temp;
    }
}
void insertAtbeg(int data)
{
    struct node *temp;
    temp=malloc(sizeof(struct node));
    if(temp==NULL)
        printf("Memory Allocation Failed");
    temp->data=data;
    temp->next=head;
    head=temp;
}
void display() {
    struct node *temp;
    temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void insertAtLast(int data)
{
    struct node *current, *temp;
    temp=malloc(sizeof(struct node));
    if(temp==NULL)
        printf("Memory allocation failed\n");
    temp->data=data;
    temp->next=NULL;
    current=head;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=temp;
}
void insertAtPosition(int data, int position) {
   struct node *temp=malloc(sizeof(struct node));
   if(temp==NULL)
        printf("Memory allocation failed\n");
    if(position==1)
        insertAtbeg(data);
    else{
        temp->data=data;
        temp->next=NULL;
    }
    struct node *current=head;
    if(current==NULL)
        printf("List is empty");
    for(int i=1;i<position-1;i++)
    {
        current=current->next;
    }
    temp->next=current->next;
    current->next=temp;


}
void deletionAtFirst()
{
    struct node *temp;
    temp=head;
    if(temp==NULL)
        printf("List is empty\n");
    head=temp->next;
    free(temp);
}
void deletionAtLast() {
    if (head == NULL) {
        printf("The list is already empty.\n");
        return;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    struct node *temp = head;
    struct node *prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
}
int main() {
    int nodes;
    printf("Enter the number of nodes to be created:\n");
    scanf("%d", &nodes);
    create(nodes);
    display();
    insertAtbeg(1);
    display();
    insertAtLast(7);
    display();
    insertAtPosition(90,3);
    display();
    deletionAtFirst();
    display();
    deletionAtLast();
    display();
    return 0;
}
