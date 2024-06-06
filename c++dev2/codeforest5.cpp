#include<iostream>
using namespace std;
int main()
{
	int n,k,a[1000],d=0;
	cin>>n>>k;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	int c=a[0];
	for(int i=0;i<=n-1;i++)
	{
		if(a[i]>=c)
		{
			d++;
			swap(a[i],a[d]);
		}
	}
	for(int i=0;i<=n-1;i++)
	{
		cout<<a[i]<<" ";
	}
}
