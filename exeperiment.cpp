#include<iostream>
using namespace std;
int func1(int,int);
int main()
{
	int z =func1(10,30);
	cout<<endl;
   func1(40,54);
	cout<<endl;
   func1(10,29);
}
int func1(int a,int b)
{
	cout<<"enter two number";
	cin>>a>>b;
	int c=a+b;
	cout<<c;
	return a+b;
	return 0;
}

