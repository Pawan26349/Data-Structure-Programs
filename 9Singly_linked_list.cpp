#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data ;
    struct node *next;
};
struct node *head;
void beginsert()
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    int item;
    if(ptr==NULL)
    {
        cout<<"Overflow\n";
    }
    else
    {
        cout<<"Enter the data : ";
        cin>>item;
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        cout<<"The item is pushed.\n";
    }
}
void lastinsert()
{
    struct node *ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"Overflow";
    }
    else
    {
        int item;
        cout<<"Enter the item : ";
        cin>>item;
        ptr->data=item;
        if(head==NULL)
        {
            ptr->next=NULL;
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
            ptr->next=NULL;
            cout<<"The item is pushed.\n";
        }

    }
}
void raninsert()
{
    struct node *ptr,*temp;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        cout<<"Overflow\n";
    }
    else
    {
        int item,pos;
        cout<<"Enter the item : ";
        cin>>item;
        cout<<"Enter the position at which you want to enter the item : ";
        cin>>pos;
        ptr->data=item;
        temp=head;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                cout<<"The postion is not present";
                break;
                return raninsert();
            }
        }
        ptr->next=temp->next;
        temp->next=ptr;
        cout<<"The item is pushed.\n";    
    }
}
void begdelete()
{
    struct node *ptr;
    if(head==NULL)
    {
        cout<<"Underflow.\n";
    }
    else
    {
        ptr=head;
        head=ptr->next;
        free(ptr);
        cout<<"The item is deleted .\n";
    }

}
void lastdelete()
{
    struct node *ptr,*temp;
    if(head==NULL)
    {
        cout<<"Overflow.\n";
    }
    else
    {
        if(head->next==NULL)
        {
            ptr=head;
            ptr->next=NULL;
            free(ptr);
            cout<<"The item is deleted.\n";
        }
        else 
        {
            ptr=head;
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
    struct node *ptr,*temp;
    if(head==NULL)
    {
        cout<<"Overflow.\n";
    }
    else 
    {
        int pos ;
        cout<<"Enter the position at which you want to delete : ";
        cin>>pos;
        ptr=head;
        for(int i=1;i<pos;i++)
        {
            temp=ptr;
            ptr=ptr->next;
            if(ptr==NULL)
            {
                cout<<"The Number of elements in the list is less than postion.\n";
            }
        }
        temp->next=ptr->next;
        free(ptr);
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
        int item,count=0,pos=0;
        cout<<"Enter the item to search : ";
        cin>>item;
        ptr=head;
        while(ptr->next!=NULL)
        {
            if(ptr->data==item)
            {
                cout<<"The item is found at position : "<<pos+1<<endl;
                break;
            }
            else 
            {
                count=0;
            }
            pos+=1;
            ptr=ptr->next;
        }
        if(count=0)
        {
            cout<<"The item is not in the list .\n";
        }

    }
} 
void display()
{
    struct node *ptr;
    if(head==NULL)
    {
        cout<<"The list is empty .\n";
    }
    else 
    {
        ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
}
int main()
{
    int choice ;
    while(choice!=9)
    {
        cout<<"1.Insert at Beginning \n2.Insert at last\n3.Insert at Random\n4.Delete from Beginnig\n5.Delete from last\n6.Delete at random\n7.Search\n8.Display\n9.Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1 : beginsert(); break;
            case 2 : lastinsert(); break;
            case 3 : raninsert(); break;
            case 4 : begdelete(); break;
            case 5 : lastdelete(); break;
            case 6 : randelete(); break;
            case 7 : search(); break;
            case 8 : display(); break;
            case 9 : cout<<"Exit.\n"; break;
        }
    }
}