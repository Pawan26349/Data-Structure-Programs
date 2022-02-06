#include<bits/stdc++.h>
using namespace std;
struct employee
{
    int id;
    float salary;
    int mobile;
};
struct employee e1,e2,e3;
int main()
{
    cout<<"enter the details of an employee : "<<endl;
    cin>>e1.id>>e1.salary>>e1.mobile;
    cin>>e2.id>>e2.salary>>e2.mobile;
    cin>>e3.id>>e3.salary>>e3.mobile;
    cout<<"the details of the employee is : "<<endl;
    cout<<e1.id<<" "<<e1.salary<<" "<<e1.mobile<<endl;
    cout<<e2.id<<" "<<e2.salary<<" "<<e2.mobile<<endl;
    cout<<e3.id<<" "<<e3.salary<<" "<<e3.mobile<<endl;
    return 0;
}