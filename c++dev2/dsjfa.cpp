#include<iostream>
using namespace std;
int a[1000],s[1000],v[1000];
int main()
{
	int n,c=0,l=0,d[1000];;
	cin>>n;
	a[1]=1;
	for(int i=2;i<=1000;i++)
	{
		if(a[i]==0)
		{
			c++;
			s[c]=i;
			for(int j=i*i;j<=1000;j+=i)
			{
				a[j]=1;
			}
		}
	}
	while(n!=l)
	{
		l++;
		
	}
}
