#include<iostream>
using namespace std;
int a[1000],m[1000];
int main()
{
	int c=0;
	a[1]=-1;
	for(int i=2;i<=1000;i++)
	{
		if(a[i]==0)
		{
			c++;
			m[c]=i;
			for(int j=i*i;j<=1000;j+=i)
			{
				a[j]=-1;
			}
		}
	}
	for(int i=1;i<=100;i++)
	{
		cout<<m[i]<<" ";
	}
}
