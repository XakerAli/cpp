#include<iostream>
using namespace std;
int main()
{
	int n,c=0,ind,mx,d=0,g;
	string a;
	cin>>a;
	for(int i=0;i<=3;i++)
	{
		mx=a[1];
		ind=1;
		for(int j=i;j<=a.size()-1;j++)
		{
			if(a[j]<=mx)
			{
				mx=a[j];
				ind=j;
			}
		}
		swap(a[i],a[ind]);
	}
	for(int t=0;t<=a.size()-1;t++)
	{
		cout<<a[t];
	}
	cout<<a[-1];
}
