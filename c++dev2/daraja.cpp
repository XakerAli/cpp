#include<iostream>
using namespace std;
int del(int a)
{
	int v=0,g=a;
	a-=1;
	if(a==0)
	{
		return v;
	}
	else if(a==g)
	{
		return v;
	}
	else
	{
		v=a*2;
	}
}
int main()
{
	int a,f;
	cin>>a;
	f=del(a);
	cout<<f;
}
