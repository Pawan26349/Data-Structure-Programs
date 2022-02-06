#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the No. of elements you want to enter in the array : ";
    cin>>n;
    int arr[n];
    int i=0;
    while(i<=n-1)
    {
        cout<<"Enter the element "<<i+1<<" : ";
        cin>>arr[i];
        i++;
    }
    int n1;
    cout<<"Enter the element you want to insert : ";
    cin>>n1;
    int k;
    cout<<"Enter the position at which you want to enter the element : ";
    cin>>k;
    for(int i=n;i>=k-1;i--)
    {
        if(i==k-1)
        {
            arr[i]=n1;
        }
        else
        {
            arr[i]=arr[i-1];
        }
    }
    cout<<"The element after the updation is : ";
    for(int i=0;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return main();
}