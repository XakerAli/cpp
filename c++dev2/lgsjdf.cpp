#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int a,b,c=0,d,e,f;
	cin>>a;
	for(int i=8;i<=1000;i++)
	{
		if(a%5==0)
		{
			break;
		}	
		a=a-3;
		c++;
	}
	cout<<a/5<<' '<<c;
}
