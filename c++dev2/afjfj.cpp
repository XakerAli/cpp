#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,a=0,s=0,d=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(i%3==0)
		{
			a=a+i;
		}
		else if(i%5==0)
		{
			s=s+i;
		}
		else if(i%7==0)
		{
			d=d+i;
		}
	}
	cout<<a+s+d;
}
