#include<iostream>
#include<map>
using namespace std;
int main()
{
	int a,f=0;
	cin>>a;
	while(a>1)
	{
		a=a/2;
		if(a/2!=0)
		{
			break;
		}
		else
		{
			f++;
		}
	}
	if(f>0)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
