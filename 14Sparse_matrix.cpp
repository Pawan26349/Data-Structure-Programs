#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the number of rows you want in your matrix : ";
    cin>>m;
    cout<<"Enter the number of columns you want in your matrix : ";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter the element at position ["<<i+1<<","<<j+1<<"] : ";
            cin>>arr[i][j];
        }
    }
    int count=0;
    cout<<"The matrix you entered is : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=0)
            {
                count+=1;
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int num=0,num1=0;
    int sarr[count][3];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=0)
            {
                sarr[num][0]=i;
                sarr[num][1]=j;
                sarr[num][2]=arr[i][j];
                num++;
            }
        }
    }
    cout<<endl;
    cout<<"The matrix representation is : "<<endl;;
    for(int i=0;i<count;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<sarr[i][j]<<" ";
        }
        cout<<endl;
    }
    return main();
}