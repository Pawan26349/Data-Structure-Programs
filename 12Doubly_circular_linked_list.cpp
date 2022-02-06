#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head;
void beginsert()
{
    struct node *ptr,*temp;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"Overflow.\n";
    }
    else
    {
        int item;
        cout<<"Enter the item : ";
        cin>>item;
        ptr->data=item;
        if(head==NULL)
        {
            head=ptr;
            ptr->next=head;
            ptr->prev=head;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->prev=temp;
            head->prev=ptr;
            ptr->next=head;
            head=ptr;
        }
        cout<<"The item is puhsed.\n";
    }
}
void lastinsert()
{
    struct node *ptr,*temp;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"Overflow.\n";
    }
    else 
    {
        int item;
        cout<<"Enter the item : ";
        cin>>item;
        ptr->data=item;
        if(head==NULL)
        {
            head=ptr;
            ptr->next=head;
            ptr->prev=head;
        }
        else 
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->prev=temp;
            ptr->next=head;
            head->prev=ptr;
        }
        cout<<"The item is pushed.\n";
    }
}
void raninsert()
{
    struct node *ptr,*temp,*help;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"Overflow.\n";
    }
    else 
    {
        int item, pos;
        cout<<"Enter the item : "; 
        cin>>item ;
        cout<<"Enter the postion at which you want to enter the item : ";
        cin>>pos;
        temp=head;
        for(int i=1;i<pos; i++)
        {
            help=temp;
            temp=temp->next;
        }
        help->next=ptr;
        ptr->prev=help;
        ptr->data=item;
        ptr->next=temp;
        temp->prev=ptr;
        cout<<"The item is pushed.\n";
    }
}
void begdelete()
{
    struct node *ptr,*temp;
    if(head==NULL)
    {
        cout<<"Underflow.\n";
    }
    else 
    {
        if(head->next==head)
        {
            head->next=NULL;
            head->prev=NULL;
            head=NULL;
            free(head);
        }
        else 
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            ptr=head;
            head=head->next;
            head->prev=head;
            temp->next=head;
            free(ptr);
        }
        cout<<"The item is deleted.\n";
    } 
}
void lastdelete()
{
    struct node *temp,*ptr;
    if(head==NULL)
    {
        cout<<"Underflow.\n";
    }
    else 
    {
        if(head->next==head)
        {
            ptr=head;
            ptr->next=NULL;
            ptr->prev=NULL;
            head=NULL;
            free(head);
        }
        else 
        {
            temp=head;
            while(temp->next!=head)
            {
                ptr=temp;
                temp=temp->next;
            }
            ptr->next=head;
            head->prev=ptr;
            free(temp);
        }
        cout<<"The item is deleted.\n";
    }
}
void randelete()
{
    struct node *ptr,*temp;
    if(head==NULL)
    {
        cout<<"Underflow.\n";
    }
    else 
    {
        int pos;
        cout<<"Enter the position at which you want to delete : ";
        cin>>pos;
        temp=head;
        for(int i=1;i<pos;i++)
        {
            ptr=temp;
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next->prev=ptr;
        free(temp);
        cout<<"The item is deleted.\n";
    }
}
void search()
{
    struct node *ptr,*temp;
    if(head==NULL)
    {
        cout<<"Nothing to search.\n";
    }
    else
    {
        int item;
        cout<<"Enter the item to be searched : ";
        cin>>item;
        int i=0,flag=0;
        temp=head;
        while(temp->next!=head)
        {
            if(temp->data==item)
            {
                cout<<"The item is found at position : "<<i+1<<endl;
                flag=0;
                break;
            }
            temp=temp->next;
            if(temp->data==item)
            {
                cout<<"The item is found at position : "<<i+2<<endl;
                flag=0;
                break;
            }
            i+=1;
        }
        if(flag>0)
        {
            cout<<"The item is not found in the list.\n";
        }
    }
}
void display()
{
    struct node *ptr;
    if(head==NULL)
    {
        cout<<"The list is empty.\n";
    }
    else 
    {
        ptr=head;
        while(ptr->next!=head)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<ptr->data;
        cout<<endl;
    }
}
void revdisplay()
{
    struct node *ptr,*temp;
    if(head==NULL)
    {
        cout<<"The list is empty.\n";
    }
    else 
    {
        ptr=head;
        while(ptr->next!=head)
        {
            ptr=ptr->next;
        }
        temp=ptr;
        while(ptr->prev!=temp)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->prev;
        }
        cout<<ptr->data;
        cout<<endl;
    }
}
int main()
{
    int choice ;
    while(choice !=10)
    {
        cout<<"---------------------------------------------------------------------------------------"<<endl;
        cout<<"1.Insert at beginning.\n2.Insert at last.\n3.Insert at random location.\n4.Deletion from beginning.\n5.Deletion from last.\n6.Deletion from random position.\n7.Search\n8.Display.\n9.Reverse Display.\n10.Exit.\n";
        cout<<"Enter your option : ";
        cin>>choice ;
        switch(choice)
        {
            case 1: beginsert(); break;
            case 2: lastinsert(); break;
            case 3: raninsert(); break;
            case 4: begdelete(); break;
            case 5: lastdelete(); break;
            case 6: randelete(); break;
            case 7: search(); break;
            case 8: display(); break;
            case 9: revdisplay(); break;
            case 10: cout<<"Exit."; break;
        }
    }
}