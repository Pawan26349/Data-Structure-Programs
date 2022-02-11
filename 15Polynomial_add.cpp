#include<iostream>
using namespace std;
void sort(int arr[],int arr2[],int n1,int n2)
{
    
}
int main()
{
    int n1,n2;
    cout<<"Enter the number of elements in the first polynomial : ";
    cin>>n1;
    int arra1[n1],arre1[n1];
    cout<<"Enter the details of the your polynomial : "<<endl;
    for(int i=0;i<n1;i++)
    {
        cout<<"Enter the coefficient of term "<<i+1<<" : ";
        cin>>arra1[i];
        cout<<"Enter the exponent of term "<<i+1<<" : ";
        cin>>arre1[i];
    }
    int temp1,temp2;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n1-i;j++)
        {
            if(arre1[j]>arre1[j+1])
            {
                temp1=arre1[j];
                temp2=arra1[j];
                arre1[j]=arre1[j+1];
                arra1[j]=arra1[j+1];
                arre1[j+1]=temp1;
                arra1[j+1]=temp2;
            }
        }
    }
    int start1=0,end1=n1-1;
    while(start1<end1)
    {
        temp1=arre1[start1];
        temp2=arra1[start1];
        arre1[start1]=arre1[end1];
        arra1[start1]=arra1[end1];
        arre1[end1]=temp1;
        arra1[end1]=temp2;
        start1++;
        end1--;
    }
    
    cout<<"Enter the number of elements in second polynomial : ";
    cin>>n2;
    int arra2[n2],arre2[n2];
    cout<<"Enter the details of the second polynomial : "<<endl;
    for(int i=0;i<n2;i++)
    {
        cout<<"Enter the coefficient of term "<<i+1<<" : ";
        cin>>arra2[i];
        cout<<"Enter the exponent of term "<<i+1<<" : ";
        cin>>arre2[i];
    }
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n2-i;j++)
        {
            if(arre2[j]>arre2[j+1])
            {
                temp1=arre2[j];
                temp2=arra2[j];
                arre2[j]=arre2[j+1];
                arra2[j]=arra2[j+1];
                arre2[j+1]=temp1;
                arra2[j+1]=temp2;
            }
        }
    }
    int start2=0,end2=n2-1;
    while(start2<end2)
    {
        temp1=arre2[start2];
        temp2=arra2[start2];
        arre2[start2]=arre2[end2];
        arra2[start2]=arra2[end2];
        arre2[end2]=temp1;
        arra2[end2]=temp2;
        start2++;
        end2--;
    }
    cout<<"The polynomial formed is : "<<endl;
    for(int i=0;i<n1;i++)
    {
        if(arre1[i]==0)
        {
            cout<<arra1[i];
        }
        else 
        {
            cout<<arra1[i]<<"x^"<<arre1[i];
            if(i<=n1-2)
            {
                cout<<" + "; 
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n2;i++)
    {
        if(arre2[i]==0)
        {
            cout<<arra2[i];
        }
        else 
        {
            cout<<arra2[i]<<"x^"<<arre2[i];
            if(i<=n2-2)
            {
                cout<<" + "; 
            }
        }
        
    }
    cout<<endl;
    return main();
}