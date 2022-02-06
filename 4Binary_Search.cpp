#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int l,int r,int x)
{
    if(r>=1)
    {
        int mid=l+(r-l)/2;
        if(x==arr[mid])
        {
            return mid+1;
        }
        if(arr[mid]>x)
        {
            return binarysearch(arr,l,mid-1,x);
        }
        else
        {
            return binarysearch(arr,mid+1,r,x);
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array in ascending order : "<<endl;
    for(int  i=0;i<n;i++)
    {
        cout<<"Enter the element "<<i+1<<" = ";
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to be searched : ";
    cin>>x;
    int result;
    result=binarysearch(arr,0,n-1,x);
    (result==-1) 
        ? cout<<"The item is not in the array ."
        : cout<<"The item is fount at position : "<<result;
    cout<<endl;
    return main();
}