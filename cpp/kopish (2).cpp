#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n,b,c,d;
	map<string,bool>mp;
	map<string,bool>::iterator it;
	string a;
	cin>>a>>c>>d;
	c=c-1;
	for(int i=c;i<=c+d;i++)
	{
		cout<<a[i];
	}
	for(it=mp.begin() ; it!=mp.end() ;it++)
	{
		if(*it==v)
		{
			g++;
		}
	}
}
