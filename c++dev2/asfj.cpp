#include<iostream>
using namespace std;
int a[1000],m[1000];
int main()
{
	int b,l=0;
	cin>>b;
	a[1]=-1;
	for(int i=0;i<=1000;i++)
	{
		if(a[i]==0)
		{
			l++;
			m[l]=i;
			for(int j=i*i;j<=1000;j+=i)
			{
				a[j]=-1;
			}
		}
	}
	cout<<m[b];
	
}
