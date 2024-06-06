#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c;
	d=a*60+b+c;
	d=d%60;
	cout<<d;
}
