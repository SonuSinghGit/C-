#include<iostream>
using namespace std;
int add(int, int);
int main()
{
	int a,b;
	cout<<"enter two number";
	cin>>a>>b;
   cout<<"sum of the number is"<<a+b;
   add(a,b);
    return 0;
}

int add(int x, int y)
{
  return x+y;
}
