#include<iostream>
#include<map>
using namespace std;
int main()
{
	string a,b,sum="";
	int n,m,k,d=0,x,y,s=0;
	cin>>a>>b;
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
		x=int(a[i]-48);
		y=int(b[i]-48);
		x=x-d;
		
		if(x<y)
		{
			x=x+10;
			d=1;
		}
		else
		{
			d=0;
		}
		s=x-y;
	sum = char(s%10+48) + sum;
	}
	for(int i=0;i<=sum.size()-1;i++)
	{
		if(sum[i]=='0')
		{
			s++;
		}
		else
		{
			break;
		}
	}
	if(sum.size()==0)
	sum='0';
	for(int i=s+0;i<=sum.size()-1;i++)
	{
		cout<<sum[i];
	}
}
