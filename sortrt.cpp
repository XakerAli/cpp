#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int b,mx,ind,n,a[10000];
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<=n-1;i++)
	{
		mx=a[0];
		ind=0;
		for(int j=0;j<=n-i-1;j++)
		{
			if(a[j]>mx)
			{
				mx=a[j];
				ind=j;
			}
		}
		swap(a[n-i-1],a[ind]);
	}
	for(int t=0;t<=n-1;t++)
	{
		cout<<a[t]<<" ";
	}
}
