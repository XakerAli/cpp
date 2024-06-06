#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	
	int a,b=0,c,v[1000],g;
	cin>>a;
	for(int i=2;i<=1000;i++)
	{
		g=sqrt(i);
		for(int i=2;i<=g;i++)
		{
			if(g%i==0)
			{
				b++;
			}
		}
		cout<<v[a]<<" ";
	}
}
