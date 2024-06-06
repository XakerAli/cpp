#include<iostream>
using namespace std;
int main()
{ 
	int a[1000],n,mx,ind,c=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				c++;
				swap(a[j],a[j+1]);
			}
		}
	}
	cout<<c;
}
