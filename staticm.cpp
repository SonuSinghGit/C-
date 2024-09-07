#include<iostream>
using namespace std;
class A
{
	int a;
	static int b;
	public:
		void input()
		{
	cout<<"enter two number";
	cin>>a>>b;
	cout<<a+b;
}
void display()
{
	cout<<"sum of the no is"<<a+b;
};
int A::b=0;
void main()
{
A obj;
obj.input();
obj.display();
return 0;
} 
