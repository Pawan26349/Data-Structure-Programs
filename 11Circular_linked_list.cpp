#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
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
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            ptr->next=head;
            temp->next=ptr;
            head=ptr;
        }
        cout<<"The item is pushed .\n";
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
        int item ;
        cout<<"Enter the item : ";
        cin>>item ;
        ptr->data=item;
        if(head==NULL)
        {
            head=ptr;
            ptr->next=head;
        }
        else 
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=head;
        }
        cout<<"The item is pushed.\n";
    }
}
void raninsert()
{
    struct node *temp,*ptr,*help;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"Overflow.\n";
    }
    else 
    {
        int item,pos ;
        cout<<"Enter the item : ";
        cin>>item;
        cout<<"Enter the position at which you want to enter the item : ";
        cin>>pos;
        temp=head;
        for(int i=1;i<pos;i++)
        {
            help=temp;
            temp=temp->next;
        }
        help->next=ptr;
        ptr->data=item;
        ptr->next=temp;
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
            ptr=head;
            ptr->next=NULL;
            free(ptr);
            head=NULL;
        }
        else 
        {
            ptr=temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            head=ptr->next;
            temp->next=head;
            free(ptr);
        }
        cout<<"The item is deleted.\n";
    }
}
void lastdelete()
{
    struct node *ptr,*temp;
    if(head==NULL)
    {
        cout<<"The list is empty.\n";
    }
    else 
    {
        if(head->next==head)
        {
            ptr=head;
            head=NULL;
            free(ptr);
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
        cout<<"Enter the position at which you want to delete element : ";
        cin>>pos;
        temp=head;
        for(int i=1;i<pos;i++)
        {
            ptr=temp;
            temp=temp->next;
            if(temp==head)
            {
                cout<<"The Deletion is not possible.\n";
                break;
                return randelete();
            }
        }
        ptr->next=temp->next;
        free(temp);
        cout<<"The item is deleted.\n";
    }
}
void search()
{
    struct node *ptr;
    if(head==NULL)
    {
        cout<<"The list is empty.\n";
    }
    else 
    {
        int item;
        cout<<"Enter the item is to searched : ";
        cin>>item;
        ptr=head;
        int i=0,flag=0;
        while(ptr->next!=head)
        {
            if(ptr->data==item)
            {
                cout<<"The item is found at position : "<<i+1<<endl;
                flag=0;
                break;
            }
            ptr=ptr->next;
            i+=1;
        }
        if(flag==0)
        {
            cout<<"The item is not found in the given list.\n";
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
    }
    cout<<endl;
}

int main()
{
    int choice ;
    while(choice!=10)
    {
        cout<<"1.Insert at beginning .\n2.Insert at last .\n3.Insert at randomly.\n4.Deletion at beginning .\n5.Deletion at last.\n6.Deletion at random position.\n7.search \n8.Display.\n9.Exit.\n";
        cout<<"Enter your choice : ";
        cin>>choice;
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
            case 9: cout<<"Exit."; break;
        }
    }
}