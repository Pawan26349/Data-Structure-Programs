#include<bits/stdc++.h>
using namespace std;
void deletion(int arr[],int n)
{
    int n1;
    cout<<"Enter the element you want to delete from the array : ";
    cin>>n1;
    int i=0,flag=0,pos=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==n1)
        {
            flag++;
            pos=i;
            break;
        }
    }
    if(flag>0)
    {
        cout<<"The item is found at postion : "<<pos+1 <<" and it was deleted ....."<<endl;
    }
    else
    {
        cout<<"The item is not even the list ";
        return deletion(arr,n1);
    }
    for(int i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<"The updated array is : ";
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of elements you want to enter : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
    }
    deletion(arr,n);
    return main();
}