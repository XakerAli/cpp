#include<iostream>
using namespace std;
int main()
{
	int a,d1,d2,d3,d4,d5,d6,c=1;
	int s=1;
	cin>>a;
	d1=a%10;
	d2=(a/10)%10;
	d3=(a/100)%10;
	d4=(a/1000)%10;
	d5=(a/10000)%10;
	d6=(a/100000)%10;
	
		if(d1%2==0)
		{
			s=s*d1;
		}
		if(d2%2==0)
		{
			s=s*d2;
		}
		if(d3%2==0)
		{
			s=s*d3;
		}
		if(d4%2==0)
		{
			s=s*d4;
		}
		if(d5%2==0)
		{
			s=s*d5;
		}
		if(d6%2==0)
		{
			s=s*d6;
		}
		if(d1%2!=0)
		{
			c=c+d1;
		}
		if(d2%2!=0)
		{
			c=c+d2;
		}
		if(d3%2!=0)
		{
			c=c+d3;
		}
		if(d4%2!=0)
		{
			c=c+d4;
		}
		if(d5%2!=0)
		{
			c=c+d5;
		}
		if(d6%2!=0)
		{
			c=c+d6;
		}
	cout<<s<<" "<<c;
}
