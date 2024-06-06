#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b=0,c,v,g;
	cin>>c>>a;
	v=a*c;
	g=sqrt(v);
	for(int i=2;i<=g;i++)
	{
		if(v%i==0)
		{
			b++;
		}
	}
	if(b==0)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
