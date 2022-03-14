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
    do
    {
        printf("element:-%d\n",ptr->data);
        ptr=ptr->next;
    } while (ptr!=head);
    
}

struct node* deletion(struct node* head)
{
    struct node *ptr=head;
    struct node*p=head;
    while(p->next!=head)
    {
        p=p->next;
    }
    p->next=head->next;
    free(ptr);
    return p->next;
}

struct node* between_deletion(struct node* ptr1,int ind)
{
    struct node* ptr2=ptr1;//first method 
    for (int i = 1; i <=ind-2; i++)
    {
       ptr1=ptr1->next; 
    }
    for (int i = 1; i <=ind-1; i++)
    {
       ptr2=ptr2->next; 
    }
    //struct node*ptr2=ptr1->next; this is another simple method rather than   using above loop                              
    //another third method struct node* ptr2=ptr1->next
    //now run the following loop
    // for (int i = 1; i <=ind-1; i++)
    // {
    //     ptr1=ptr1->next; 
    //     ptr2=ptr2->next; 
    // }
    
    ptr1->next=ptr2->next;
    free(ptr2);
}

void end(struct node* head)
{
    struct node* p=head;
    struct node* q=head;
    while (q->next!=head)
    {
        q=q->next;
    }
    while (p->next!=q)
    {
        p=p->next;
    }
    //we can also do this code intialising q with head->next so now p will point to 1st node and q to the 2nd node
    // while (q->next!=NULL)
    // {
    //     q=q->next;
    //     p=p->next;
    // }
    //AND DO FOLLOWING OPERATIONS
    p->next=q->next;
    free(q);
}

int main()
{
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    struct node* fifth;

    head=(struct node*)malloc(sizeof(struct node));//78144478
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
    
    printf("\nbefore\n");
    transversal(head);
    printf("\nafter\n");
    //head=deletion(head); 
    //between_deletion(head,4);
    end(head);

    transversal(head);
}