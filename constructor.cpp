#include<iostream>
using namespace std;
class fact
{
	int i,n,m;
	public:
	fact()
	{
		m=1;
	cout<<"enter the number:"<<endl;
	cin>>n;
  
	for(i=n;i>=1;i--)
	{
		m*=i;
	}
	cout<<"factorial of number:"<<m;
}
};
 int main()
 {
 	fact obj;
 	return 0;
 }
