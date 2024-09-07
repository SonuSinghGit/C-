#include<iostream>
using namespace std;
class A
{
	int a,b;
	float c;
	public:A()
	{
		cout<<"enter two number";
		cin>>a>>b;
		cout<<a<<b<<endl;
	}
	A(int x,int y)
	{
		a=x,b=y;
		cout<<a<<" "<<b<<endl;
	}
	A(int x,double z)
	{
		a=x,c=z;
		cout<<a<<" "<<c<<endl;
	}
};
int main()
{
	A obj,obj2(3,5),obj3(6,24.6);
	return 0;
}


