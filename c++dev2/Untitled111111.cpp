#include<iostream>
#include<math.h>
using namespace std;
int b[1000];
int main()
{
	int a,c=0;
	cin>>a;
	for(int i=2;i<=1000;i++)
	{
		for(int j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==0)
		{
			b[i]=i;
		}
		else
		{
			c=0;
		}
		if(b[i]==0)
		{
			continue;
		}
		else
		{
			c=0;
		}
	}
	cout<<b[a]<<' ';
}
