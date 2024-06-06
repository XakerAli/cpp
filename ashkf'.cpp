#include<iostream>
#include<deque>
using namespace std;
int main()
{
	string a,b;
	b="";
	cin>>a;
	for(int i=0;i<=a.size()-1;i++)
	{
		b=a[i]+b;
	}
	cout<<b;
}
