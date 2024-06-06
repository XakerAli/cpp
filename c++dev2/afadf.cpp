#include<iostream>
#include<map>
using namespace std;
int main()
{
	double b,c,x,y,f;
	cin>>b>>c>>x>>y;
	f=x*y*(c/(2*b));
	cout.precision(2);
	cout<<fixed<<f;
}
