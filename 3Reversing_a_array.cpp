#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;
    cout<<"Enter the array : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<" = ";
        cin>>arr[i];
    }
    cout<<endl;
    int start=0,end=n-1;
    while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    cout<<"The reversed array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return main();
}