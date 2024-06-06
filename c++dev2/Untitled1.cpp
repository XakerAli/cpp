#include<iostream>
using namespace std;
int aziz(int a)
{
	int c=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		return a;
	}
	else
	{
		a=0;
		return a;
	}
}
int main()
{
	int a,b,c,t1,t,t2,d,g;
	cin>>a>>b>>c;
	t=aziz(a);
	t1=aziz(b);
	t2=aziz(c);
	d=t+t1+t2;
	g=aziz(d);
	(g==d)?cout<<d<<" yes":cout<<d<<" no";
}
