#include<iostream>
using namespace std;
class area
{
	int l,b,are;
	public:
		area()
		{
			l=10;
			b=20;
			are=l*b;
			cout<<"area of rectangle:"<<are;
		}
};
int main()
{
	cout<<"called";
	area obj;
	cout<<"object called ";
	return 0;
}
