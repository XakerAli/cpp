#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b=0,n,c,v,g;
	cin>>n;
	int m[n];
	for(int i=1;i<=n;i++)
	{
		cin>>m[i];
		v=sqrt(m[i]);
		for(int j=2;j<=sqrt(m[i]);j++)
		{
			if(m[i]%j==0)
			{
				b++;
			}
		}
		if(b==0)
		{
			cout<<"yes"<<endl;
		}
		if(b!=0)
		{
			cout<<"no"<<endl;
		}
		b=0;
	}
}
