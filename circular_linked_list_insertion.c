#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void transversal(struct  node *head)
{
    struct node* ptr=head;

    //1st method----harry bhai method
    do
    {
        printf("Element:-%d\n",ptr->data);
        ptr=ptr->next;
    } while(ptr!=head);
    
    //second method----my method
    // while (ptr->next!=head)
    // {
    //     printf("Element:-%d\n",ptr->data);
    //     ptr=ptr->next;
    // }
    // printf("Element:-%d\n",ptr->data);
}

int search(struct  node *head,int value)
{
    int count=0;
    struct node* ptr=head;

    //1st method----harry bhai method
    do
    {
        count++;
        if (ptr->data==value)
        {
            return count;
        }
        
        ptr=ptr->next;
    } while(ptr!=head);
    
    //second method----my method
    // while (ptr->next!=head)
    // {
    //    count++;
    //    if (ptr->data==value)
    //      {
    //        return count;
    //      } 
    //     ptr=ptr->next;
    // }
    // if (ptr->data==value)
    //     count++;
    //     {
    //        return count;
    //     }
}

struct node* insertion(struct node* head)
{
    struct node *p=head;
    struct node *ptr=(struct node*) malloc(sizeof(struct node));
    while (p->next!=head)
    {
        p=p->next;
    }
    ptr->data=0;    //putting data new 1st node
    ptr->next=head; //pointing new 1st node to earlier head(1st node)
    p->next=ptr;    //last node pointing to new 1st node(head)
    return ptr;
}

void between_insertion(struct  node *p,int ind)
{
    //between_insertion in circular linked list is as same as linear linked list
   for (int i = 1; i < ind; i++)
   {
       p=p->next;
   }
   
            struct node* ptr=(struct node*)malloc(sizeof(struct node));
            ptr->data=9999;
            ptr->next=p->next;
            p->next=ptr;
}

void end_insertion(struct  node *head)
{
    struct node* p;
    while (p->next!=head)
    {
        p=p->next;
    }
    
   
            struct node* ptr=(struct node*)malloc(sizeof(struct node));
            ptr->data=9999;
            ptr->next=p->next;
            p->next=ptr;
}

void given_address(struct node* value)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=9999;
    ptr->next=value->next;
    value->next=ptr;
}

int main()
{
   struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    struct node* fifth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));

    head->data=45;
    head->next=second;

    second->data=55;
    second->next=third;

    third->data=65;
    third->next=fourth;

    fourth->data=75;
    fourth->next=fifth;

    fifth->data=85;
    fifth->next=head;

    

    printf("\nBEFORE\n");
    transversal(head);
    //printf("The given values found at %d node",search(head,75));
    //head=insertion(head);
    //between_insertion(head,3);
    //end_insertion(head);
    //given_address(fourth);
    printf("\nAFTER\n");
    transversal(head);
    return 0;
}