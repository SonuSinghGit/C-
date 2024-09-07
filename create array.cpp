
#include<iostream>
using namespace std;
int main()
{
	int ar[30],arr[20],n,b,m,i;
	cout<<"enter the size of array";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>ar[i];
	}
	for(i=1;i<=n;i++)
	{
		cout<<"ar[i]  ="<<ar[i]<<endl;
	}
	
	cout<<"enter the size of array";
	cin>>b;
	for(i=1;i<=b;i++)
	{
		cin>>arr[i];
	}
	for(i=1;i<=b;i++)
	{
		cout<<"arr[i]  ="<<arr[i]<<endl;
	}
	cout<<"ar[i] arr[i] ="<<ar[i]+arr[i]<<endl;
	return 0;
}
