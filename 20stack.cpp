#include<iostream>
using namespace std;
int stack[100];
int top=-1;
void push()
{
    if(top==99)
    {
        cout<<"The stack is full.\n";
    }
    else 
    {
        int item;
        cout<<"Enter the item : ";
        cin>>item;
        stack[++top]=item;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"The stack is empty.\n";
    }
    else 
    {
        int item=stack[top];
        top-=1;
        cout<<"The item that was deleted is : "<<item<<endl;
    }
}
void display()
{
    if(top==-1)
    {
        cout<<"The stack is empty.\n";
    }
    else 
    {
        cout<<"The elements in the stack is : ";
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int choice;
    while(choice!=3)
    {
        cout<<"1.Push \n2.Pop \n3.Display\n4.Exit\n";
        cout<<"Enter your choice : ";
        cin>>choice ;
        switch(choice)
        {
            case 1: push();break;
            case 2: pop();break;
            case 3: display(); break;
            case 4: cout<<"Exit.\n";break;
        }
    }
    return main();
}