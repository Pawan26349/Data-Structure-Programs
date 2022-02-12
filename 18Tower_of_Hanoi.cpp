#include<iostream>
#include<math.h>
using namespace std;
void tower(int n,char beg,char aux,char end)
{
    if(n==1)
    {
        cout<<beg<<"->"<<end<<endl;
    }
    if(n>1)
    {
        tower(n-1,beg,end,aux);
        tower(1,beg,aux,end);
        tower(n-1,aux,beg,end);
    }                                                                     
}
int main()
{
    int n;
    cout<<"Enter the number of disks : ";
    cin>>n;
    int steps=pow(n,2)-1;
    cout<<"The total moves : "<<steps<<endl;
    char beg='A',aux='B',end='C';
    tower(n,beg,aux,end);
    return main();
}