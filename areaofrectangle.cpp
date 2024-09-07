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
	
	area obj;

	return 0;
}
