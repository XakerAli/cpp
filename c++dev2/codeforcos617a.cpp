#include<iostream>
using namespace std;
int fun(int a,int b)
{
	if(b==a)
	{
		return b;
	}
}
int main()
{
	int a,b,c=0,func;
	cin>>a;
	func=fun(a,0);
	cout<<func;
}
