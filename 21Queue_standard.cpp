#include<iostream>
using namespace std;
int queue[100];
int front =-1, rear=-1;
void insert()
{
    if(rear==99)
    {
        cout<<"The queue is full .\n";
    }
    else
    {
        int item;
        cout<<"Enter the item : "; 
        cin>>item;
        queue[++rear]=item;
        cout<<"The item is entered.\n";
    }
}
void deletion()
{
    if(front==rear)
    {
        cout<<"The queue is empty.\n";
    }
    else 
    {
        int item=queue[front+1];
        cout<<"The item that was deleted is :"<<item;
        front+=1;
        cout<<endl;
    }
}
void display()
{
    if(front==rear)
    {
        cout<<"The queue is empty.\n";
    }
    else 
    {
        cout<<"The elements in the queue are : ";
        for(int i=front+1;i<=rear;i++)
        {
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}
void check()
{
    cout<<"The value of front : "<<front<<endl;
    cout<<"The value of rear : "<<rear<<endl;
}
int main()
{
    int choice;
    while(choice!=5)
    {
        cout<<"1.Insertion \n2.Deletion \n3.Dislay \n4.Check\n5.Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1: insert();break;
            case 2: deletion();break;
            case 3: display(); break;
            case 4: check(); break;
            case 5: cout<<"Exit.\n";break;
        }
    }
}