#include<iostream>
using namespace std;
int a[10000];
int main()
{
	long long int n,i=1,s=0,c=0,f=0;
	cin>>n;
	while(30>s)
	{
		s++;
		i=i*2;
		a[s]=i;
	}
	while(30>c)
	{
		c++;
		if(a[c]==n)
		{
			f++;
		}
	}
	if(f==1)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
