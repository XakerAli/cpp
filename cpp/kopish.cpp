#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n,b,c,d;
	string a;
	cin>>a>>c>>d;
	c=c-1;
	for(int i=c;i<=c+d;i++)
	{
		cout<<a[i];
	}
}
