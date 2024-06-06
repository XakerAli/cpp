#include<iostream>
#include<cmath>
using namespace std;
int m[1000];
int main()
{
	int a,b,c,d,s=0;
	string f="abcdef";
	cin>>a>>b>>c>>d;
	for(int i=1;i<=d;i++)
	{
		cout<<i%10;
	}
	for(int i=1;i<=c;i++)
	{
		cout<<f[i%2];
	}
	for(int i=1;i<=b;i++)
	{
		cout<<f[i%2+2];
	}
	for(int i=b+c+d+1;i<=a;i++)
	{
		cout<<f[i%2+4];
	}
}
