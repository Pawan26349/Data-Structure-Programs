#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0,missing;
	cout<<"Enter the size of array : ";
	cin>>n;
	int arr[n-1];
	cout<<"please give value to insert in array: \n";
	for(i=0;i<n-1;i++)
	{
		cin>>arr[i];
	    sum=sum+arr[i];
	 }
	missing = (n*(n+1))/2 - sum;
	cout<<"missing number is = "<< missing<<endl;
	return main();
}