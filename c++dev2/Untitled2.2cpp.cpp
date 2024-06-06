#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b=0,c,v,g;
	cin>>a>>c;
	v=a*c;
	for(int i=2;i<=sqrt(v);i++)
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
