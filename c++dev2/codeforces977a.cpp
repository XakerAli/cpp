#include<iostream>
using namespace std;
int main()
{
	string a,func;
	int c=0;
	cin>>a;
	for(int i=0;i<=a.size()-1;i++)
	{
		if(a[i]=='4' or a[i]=='7')
		{
			c++;
		}
	}
	if(c==a.size())
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
