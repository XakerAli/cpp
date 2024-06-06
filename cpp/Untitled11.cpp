#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a;
	b=a%10+(a/10)%10+(a/100)%10;
	c=(a/1000)%10+(a/10000)%10+(a/100000)%10;
	if(b==c)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}
