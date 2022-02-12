#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number :  ";
    cin>>n;
    int a=0,b=1,c=0;
    int i=1;
    while(i<=n)
    {
        if(i==1)
        {
            cout<<a<<" ";
        }
        else if(i==2)
        {
            cout<<b<<" ";
        }
        else 
        {
            c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
        }
        i++;
    }
    cout<<endl;
    return main();
}