#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c,d,f;
	cin>>a>>b>>c;
	if(a>=b and a>=c)
	{
		d=a;
	}
	else if(b>=a and b>=c)
	{
		d=b;
	}
	else if(c>=a and c>=b)
	{
		d=c;
	}
	if(b>=a and c>=a)
	{
		f=a;
	}
	else if(a>=b and c>=b)
	{
		f=b;
	}
	if(a>=c and b>=c)
	{
		f=c;
	}
	cout<<f+d;
}
