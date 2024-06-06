#include<iostream>
using namespace std;
int main()
{
	int b,l,a;
	cin>>b;
	l=(b%10)+((b/100)%10)+(b/10000)%10;
	a=((b/10)%10)*((b/1000)%10)*((b/100000)%10);
	cout<<a<<" "<<l;
}
