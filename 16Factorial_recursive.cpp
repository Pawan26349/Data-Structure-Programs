#include<iostream>
using namespace std;
int fact(double n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else 
    {
        n=n*fact(n-1);
    }
    return n;
}
int main()
{
    double n;
    cout<<"Enter the number : ";
    cin>>n;
    double result=fact(n);
    cout<<"The factorial of the given number is : "<<result<<endl;
    return main();
}