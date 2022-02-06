#include<bits/stdc++.h>
using namespace std;
int main()  
	{  
	    int marks[6] = {56,78,88,76,56,89};  
	    int i;    
	    float avg;  
	    for (i=0; i<6; i++ )   
	    {  
	        avg = avg + marks[i];   
	    }    
	    cout<<avg/6<<endl;
        return 0;
	}   
