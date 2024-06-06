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
		c=int(a[i]-48);
		d=int(b[i]-48);
		c=c-h;
		if(c<d)
		{
			h=1;
			c=c+10;
		}
		else
		{
			h=0;
		}
		g=c-d;
		sum = char(g%10+48) + sum;
	}
	cout<<sum;
}
