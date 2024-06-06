#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0,d=0,f=4;
	for(int i=0;i<=4-1;i++)
	{
		cin>>a>>b;
		c=c+a;
		d=d+b;
	}
	if(c>d)
	{
		cout<<1;
	}
	else if(c==d)
	{
		cout<<"DRAW";
	}	
	else if(c<d)
	{
		cout<<2;
	}
}
