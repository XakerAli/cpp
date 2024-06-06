#include<iostream>
#include<math.h>
#include<deque>
using namespace std;
int m[1000];
int main()
{
	deque<int>tup,toq,juft;
	int a[10000],c[1000],b2,s=0,t=0,x1=0,n;
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		{
			juft.push_back(a[i]);
		}
		if(a[i]%2!=0)
		{
			toq.push_back(a[i]);
		}
		c[i]=a[i];
	}
	m[1]=-1;
	for(int i=2;i<=n;i++)
	{
		if(m[i]==0)
		{
			t++;
			tup.push_back(i);
			for(int j=i*i;j<=1000;j+=i)
			{
				m[j]=-1;
			}
	}
  	}
  	if(tup.size()!=0)
	{
		while(tup.size())
		{
			cout<<tup.front()<<" ";
			tup.pop_front();
		}
	}
	else
	{
		cout<<"-1";
	}
	cout<<endl;
	if(tup.size()!=0)
	{
		while(juft.size())
		{
			cout<<juft.front()<<" ";
			juft.pop_front();
		}
	}
	else
	{
		cout<<"-1";
	}
	cout<<endl;
	if(tup.size()!=0)
	{
		while(toq.size())
		{
			cout<<toq.front()<<" ";
			toq.pop_front();
		}
	}
	else
	{
		cout<<"-1";
	}
}

