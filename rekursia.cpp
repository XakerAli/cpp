#include<iostream>
using namespace std;
int c=0;
int aziz(int a)
{
	if(a%2==0)
	{
		c++;
		return aziz(a/2);
	}
	else if(a==1)
	{
		return c;
	}
	else
	{
		return -1;
	}
	
}
int main()
{
	int a,d;
	cin>>a;
	d=aziz(a);
	cout<<d;
}
