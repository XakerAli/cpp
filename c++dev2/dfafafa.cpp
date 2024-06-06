#include<iostream>
using namespace std;
int main()
{
	string a,b,sum="";
	cin>>a>>b;
	int c,d,n,m,k,g,h=0;
	if(a.size()<b.size())
	{
		swap(a,b);
	}
	n=a.size();
	m=b.size();
	k=n-m;
	for(int i=0;i<=k-1;i++)
	{
		b='0'+b;
	}
	for(int i=n-1;i>=0;i--)
	{
		c=(a[i]-48);
		d=(b[i]-48);
		g=c+d+h;
		if(g>=10)
		{
			h=1;
		}
		else
		{
			h=0;
		}
		sum=char(g%10+48)+sum;
	}
	if(1==h)
	{
		sum='1'+sum;
	}
	cout<<sum;
}
