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
	if(a>b)
	{
		cout<<a;
	}
	else
	{
		cout<<b;
	}
}
