//Linked list is a type of data structure having nodes connected to each other.a node have two parts,one is data and other is to store address of next node.
#include<stdio.h>
#include<stdlib.h>
//declaration of data and next variables to store data and address of next node respectively.
struct node
{
    int data;
    struct node *next;
};
struct node *head,*tail,*newnode,*ptr;
//Function to create a linked list.
void create()
{
    int data;
    printf("enter the data");
    scanf("%d",&data);
    if(head==NULL)
    {
        newnode=malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        head=newnode;
        tail=newnode;
    }
    else
    {
        newnode=malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        tail->next=newnode;
        tail=newnode;
    }
}
//Function to count nodes in a linked list.
void count_of_nodes()
{
    int count=0;
    if(head==NULL)
    printf("linked list is empty");
    ptr=head;
    while(ptr!=NULL)
    {
        count++;
        ptr=ptr->next;
    }
    printf("no of nodes=%d",count);
}
//Function to display a linked list.
void display()
{
    if(head==NULL)
    printf("linked list is empty");
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d->\t",ptr->data);
        ptr=ptr->next;
    }
}
//Function to insert node at end of a linked list.
void insert_node_at_end()
{
    int data;
    printf("enter the data in linked list");
    scanf("%d",&data);
    ptr=head;
    struct node *nodeend=malloc(sizeof(struct node));
    nodeend->data=data;
    nodeend->next=NULL;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=nodeend;
    ptr=nodeend;
}
//Function to insert node at begining of a linked list.
void insert_at_bgn()
{
    int data;
    printf("enter the data in linked list");
    scanf("%d",&data);
    struct node *nodefirst=malloc(sizeof(struct node));
    nodefirst->data=data;
    nodefirst->next=NULL;
    nodefirst->next=head;
    head=nodefirst;
}
//Function to insert node at any position of a linked list.
void insert_at_any_pos()
{
    int pos,data;
    struct node *nodepos=malloc(sizeof(struct node));
    printf("enter the position where to insert the data");
    scanf("%d",&pos);
    printf("enter the data in linked list");
    scanf("%d",&data);
    ptr=head;
    nodepos->data=data;
    nodepos->next=NULL;
    for(int i=1;i<pos-1;i++)
    {
        ptr=ptr->next;
    }
    nodepos->next=ptr->next;
    ptr->next=nodepos;
}
//Function to delete node at begining of a linked list.
void delete_at_bgn()
{
    ptr=head;
    if(head->next==NULL)
    {
        head=0;
    }
    else
    {
        head=head->next;
    }
    free(ptr);
}
//Function to delete node at end of a linked list.
void delete_at_end()
{
    struct node *prevnode;
    ptr=head;
    while(ptr->next!=NULL)
    {
        prevnode=ptr;
        ptr=ptr->next;
    }
    if(ptr==head)
    {
        head=0;
    }
    else
    {
        prevnode->next=0;
    }
    free(ptr);
}
//Function to delete node from any position of a linked list.
void delete_at_pos()
{
    int pos;
    printf("enter the position where to delete");
    scanf("%d",&pos);
    struct node *deletenode;
    ptr=head;
    for(int i=1;i<pos-1;i++)
    {
        ptr=ptr->next;
    }
    if(pos==1)
    {
        delete_at_bgn();
    }
    else
    {
    deletenode=ptr->next;
    ptr->next=deletenode->next;
    }
    free(deletenode);
}
//Function to reverse a linked list.
void reverse_linkedlist()
{
    struct node *current,*prev,*nxt;
    current=head;
    nxt=NULL;
    prev=NULL;
    while(current!=NULL)
    {
        nxt=current->next;
        current->next=prev;
        prev=current;
        current=nxt;
    }
    head=prev;
}
//Function to search any element in a linked list.
void searchelement()
{
    int count=0,search,m=0;
    printf("enter the element you want to search in the linked list");
    scanf("%d",&search);
    ptr=head;
    while(ptr!=NULL)
    {
        count++;
        if(search==ptr->data)
        {
            printf("element found at position=%d\n",count);
            m=1;
        }
        ptr=ptr->next;
    }
    if(m==0)
    {
        printf("element not found in the linked list");
    }
}
//Main function to run the code.
int main()
{
    int choice;
    do
    {
        printf("\n1.create");        
        printf("\n2.countofnodes");        
        printf("\n3.display");        
        printf("\n4.insertatbgn");        
        printf("\n5.insertatend");        
        printf("\n6.insertatanypos");        
        printf("\n7.deleteatbgn");        
        printf("\n8.deleteatend");        
        printf("\n9.deleteatanypos");        
        printf("\n10.reverselinkedlist");        
        printf("\n11.searchinganelement");        
        printf("\n12.exit");
        printf("\nenter your choice of operation");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create();
            break;
            case 2:count_of_nodes();
            break;
            case 3:display();
            break;
            case 4:insert_at_bgn();
            break;
            case 5:insert_node_at_end();
            break;
            case 6:insert_at_any_pos();
            break;
            case 7:delete_at_bgn();
            break;
            case 8:delete_at_end();
            break;
            case 9:delete_at_pos();
            break;
            case 10:reverse_linkedlist();
            break;
            case 11:searchelement();
            break;
            default:printf("wrong choice or invalid operation");
            break;
        }        
    }
    while(choice!=12);
}