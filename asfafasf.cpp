#include<iostream>
using namespace std;
int a[1010],m[1010];
int main()
{
	int b,l=0,f=0;
	cin>>b;
	a[1]=-1;
	for(int i=2;i<=b;i++)
	{
		if(a[i]==0)
		{
			l++;
			m[l]=i;
			for(int j=i*i;j<=b;j+=i)
			{
				a[j]=-1;
			}
		}
	}
	for(int t=0;t<=l;t++)
	{
		if(b%m[t]==0)
		{
			f++;
			cout<<m[t]<<" ";
		}
	}
	if(f==0)
	{
		cout<<b;
	}
}
