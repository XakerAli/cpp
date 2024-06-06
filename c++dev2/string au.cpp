#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string a[n];
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<=n-1;i++)
	{
		cout<<a[i].size()<<' ';
	}
}
