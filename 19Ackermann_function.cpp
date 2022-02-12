#include<iostream>
using namespace std;
int ackermann(int m,int n)
{
    if(m==0)
    {
        return n+1;
    }
    if (m!=0 && n==0)
    {
        return ackermann(m-1,1);
    }
    else
    {
        return ackermann(m-1,ackermann(m,n-1));
    }
}
int main()
{
    int m,n;
    cout<<"Enter the value of m : ";
    cin>>m;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Your function is just like : "<<"A("<<m<<","<<n<<")"<<endl;
    int result=ackermann(m,n);
    cout<<"The value after applying ackermann function is : "<<result<<endl;
    return main();
}