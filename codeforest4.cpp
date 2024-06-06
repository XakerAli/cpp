#include<iostream>
using namespace std;
int c=0;
int aziz(int a)
{
	string b;
	int d=0;
	while(a--)
	{
		cin>>b;
		if(b[0]=='X' and b[1]=='+' and b[2]=='+')
		{
			c++;
		}
		if(b[0]=='+' and b[1]=='+' and b[2]=='X')
		{
			if(d==1)
			{
				c+=2;
			}
			d=1;
		}
		else if(b[0]=='X' and b[1]=='-' and b[2]=='-')
		{
			if(d==1)
			{
				c+=2;
			}
			c--;
		}
		if(b[0]=='-' and b[1]=='-' and b[2]=='X')
		{
			d=1;
		}
		return d;
	}
	
}
int main()
{
	int a,d;
	cin>>a;
	d=aziz(a);
	cout<<d;
}
