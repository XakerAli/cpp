#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	string a;
	int b,c=0,s=0;
	cin>>a;
	for(int i=0;i<=a.size()-1;i++)
	{
		b=int(a[i]-48);
		c=c+b;
	}
	for(int i=1;i<=c;i++)
	{
		if(c%i==0)
		{
			s++;
		}
	}
	if(s==2)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
