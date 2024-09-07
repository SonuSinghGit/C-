#include<iostream>
using namespace std;
int main()
{
	int a[20],n,i,m;
	cout<<"enter the size of array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter the element of array";
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
	cout<<"element of array is"<<a[i]<<endl;
}
	cout<<"new element are";
	cin>>m;
	a[i]=m;
	for(i=0;i<n;i++)
	{
		cout<<"new array is"<<a[i]<<endl;
		
	}
	
    
    return 0;
}
