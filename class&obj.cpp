#include<iostream>
using namespace std;
class demo
{
	char name[20];
	int roll;
	float sgpa;
	public:voidfillform()
		{
			cout<<"enter your name";
			cin>>name;
			cout<<"enter your roll no";
			cin>>roll;
			cout<<"enter your sgpa";
			cin>>sgpa;
		}
			void showinfo()
			{
			
			cout<<"your name is"<<name<<endl;
			cout<<"your roll no is"<<roll<<endl;
			cout<<"your sgpa is"<<sgpa<<endl;
		  }
		
};
int main()
{
demo obj;
obj.voidfillform();
obj.showinfo();
return 0;
}


