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
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"Overflow\n";
    }
    else 
    {
        int item ;
        cout<<"Enter the item : ";
        cin>>item;
        if(head==NULL)
        {
            ptr->next=NULL;
            ptr->prev=NULL;
            ptr->data=item;
            head=ptr;
            cout<<"The item is pushed.\n";
        }
        else 
        {
            ptr->prev=NULL;
            ptr->data=item;
            ptr->next=head;
            head->prev=ptr;
            head=ptr;
            cout<<"the item is pushed .\n";
        }
    }
}
void lastinsert()
{
    struct node *ptr,*temp,*help;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"Overflow.\n";
    }
    else
    {
        int item ;
        cout<<"Enter the item : ";
        cin>>item;
        if(head==NULL)
        {
            ptr->next=NULL;
            ptr->prev=NULL;
            ptr->data=item;
            head=ptr;
            cout<<"The item is pushed.\n";
        }
        else
        {
            temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->prev=temp;
            ptr->next=NULL;
            ptr->data=item;
            cout<<"The item is pushed.\n";
        }
    }
}
void raninsert()
{
    struct node *ptr,*temp,*help;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"Overflow.\n";
    }
    else 
    {
        int item , pos;
        cout<<"Enter the item : ";
        cin>>item;
        cout<<"Enter the positon at which you want to enter the element : ";
        cin>>pos;
        temp=head;
        for(int i=1;i<pos;i++)
        {
            help=temp;
            temp=temp->next;
            if(temp->next==NULL)
            {
                cout<<"The postion is not present(Not possible).\n";
                break;
            }
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
        if(head->next==NULL)
        {
            ptr=head;
            head=NULL;
            free(ptr);
            cout<<"The item is deleted.\n";
        }
        else 
        {
            temp=head;
            for(int i=1;i<2;i++)
            {
                temp=temp->next;
            }
            ptr=head;
            head=ptr->next;
            temp->prev=NULL;
            free(ptr);
            cout<<"The item is deleted.\n";
        }
    }
}
void lastdelete()
{
    struct node *ptr,*temp;
    if(head==NULL)
    {
        cout<<"Underflow.\n";
    }
    else 
    {
        ptr=head;
        if(ptr->next==NULL)
        {
            head=NULL;
            free(ptr);
            cout<<"The item is deleted.\n";
        }
        else 
        {
            while(ptr->next!=NULL)
            {
                temp=ptr;
                ptr=ptr->next;
            }
            temp->next=NULL;
            free(ptr);
            cout<<"The item is deleted.\n";
        }
    }
}
void randelete()
{
    struct node *ptr,*temp,*help;
    if(head==NULL)
    {
        cout<<"Underflow.\n";
    }
    else 
    {
        int pos;
        cout<<"Enter the postion at which you want to delete the item : ";
        cin>>pos;
        temp=head;
        for(int i=1;i<pos;i++)
        {
            ptr=temp;
            temp=temp->next;
            help=temp->next;
            if(temp==NULL)
            {
                cout<<"The postion deletion is not possible .\n";
                break;
            }
        }
        ptr->next=help;
        free(temp);
        help->prev=ptr;
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
        int item,i=0,count=0 ;
        cout<<"Enter the item to be searched : ";
        cin>>item ;
        ptr=head;
        while(ptr->next!=NULL)
        {
            if(ptr->data==item)
            {
                cout<<"The item is found at positon "<<i+1<<endl;
                count+=1;
            }
            ptr=ptr->next;
            i+=1;
        }
        if(count==0)
        {
            cout<<"The item is not in the list.\n";
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
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }

    }
    cout<<endl;
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
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
}
int main()
{
    int choice;
    while(choice!=10)
    {
        cout<<"1.Insert at beginning \n2.Insert at last \n3.Insert at random \n4.Deletion in beginning \n5.Deletion at last \n6.Deletion at random \n7.Search \n8.Display \n9.Reverse Display. \n10.Exit.\n";
        cout<<"Enter your choice : ";
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
            case 10: cout<<"Exit.";
        }
    }
}