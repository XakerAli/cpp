#include<iostream>
using namespace std;
int a[1000];
int main()
{
	int n,mx,ind;
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	for(int j=0;j<=n-1;j++)
	{
		mx=a[j];
		ind=j;
		for(int t=0;t<=n-j-1;t++)
		{
			if(a[t]<mx)
			{
				mx=a[t];
				ind=t;
			}
		}
		swap(a[n-j-1],a[ind]);
	}
	for(int i=0;i<=n-1;i++)
	{
		cout<<a[i]<<" ";
	}
}
