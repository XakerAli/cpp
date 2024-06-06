#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	long long int a,b,c=0;
	cin>>a;
	if(a<0)
	{
		a=abs(a);
		b=1;
	}
	for(int i=-10000;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			c=c+i;
		}
	}
	if(b==1)
	{
		cout<<(c+a)*(-1);
	}
	else
	{
		cout<<c+a;
	}
}
