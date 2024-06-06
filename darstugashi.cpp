#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c=0,d=0,e,s=9;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		d+=45;
		if(i%2!=0)
		{
			c+=15;
		}
		if(i%2==0)
		{
			c+=5;
		}
		e=d+c;
		if(e>=60)
		{
			e=e%60;
			s+=1;
		}
	}
	cout<<s<<' '<<e;
}
