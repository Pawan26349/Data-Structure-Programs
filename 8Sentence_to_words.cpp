#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the sentence : ";
    getline(cin,s);
    int l;
    l=s.length();
    string m;
    for(int i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            cout<<endl;
        }
        else 
        {
            cout<<s[i];
        }
    }
    cout<<endl;
    return main();
}