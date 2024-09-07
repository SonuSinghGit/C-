#include<iostream>
using namespace std;
class account
{
int accno,salary,temp;
float rate;
public:
account()
{
	rate=6.5;
	cout<<"enter the account no:";
	cin>>accno;
	cout<<"enter the salary:";
	cin>>salary;
temp=(salary*6.5)/100;
cout<<"interest"<<temp<<endl;
cout<<"updated salary"<<temp+salary<<endl;
}
~account()
{
	cout<<"thank you for visiting";
	
}
};
int main()
{
	account obj;
	return 0;
}
