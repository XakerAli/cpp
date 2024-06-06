#include<iostream>
using namespace std;
int main()
{
	int a,s,d,f,b;
	cin>>b;
	s=b;
	while(s>0)
	{
		if(s==0)
		{
			break;
		}
		s=s-1;
		cin>>a;
		d=d+a;
		f=f*a;
	}
	cout<<d<<" "<<f;
}
