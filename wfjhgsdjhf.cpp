#include<iostream>
using namespace std;
int del(int x, int y)
{
	x=x*2;
	y--;
	if(y==0)
	{
		return x;
	}
	del(x,y);
}
int main()
{
	int a,f;
	cin>>a;
	f=del(1,a);
	cout<<f;
}
