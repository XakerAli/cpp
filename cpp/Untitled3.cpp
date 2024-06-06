#include <iostream>
using namespace std;

int main() 
{
	int a,b,c,d,e;
	cin>>a>>b>>c;
	d=c+b;
	if(b>=100)
	{
		d=d%100;
		a=a+1;
	}
	if(100==d)
	{
		d=0;
		a=a+1;
	}
	cout<<a<<" "<<d;
}
