#include<iostream>
using namespace std;
int main()
{
	string a[100],b;
	int n,c=0,d,p,m,h=0;
	cin>>n;
	while(n--)
	{
		cin>>d>>p>>m;
		if(d==1)
		{
			c++;
		}
		if(p==1)
		{
			c++;
		}
		if(m==1)
		{
			c++;
		}
		if(c>=2)
		{
			h++;
		}
		c=0;
	}
	cout<<h;
}
