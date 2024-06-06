#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b=0;
	cin>>a;
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
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
