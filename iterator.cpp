#include<iostream>
#include<map>
using namespace std;
int main()
{
	string a;
	map<string,int>mp;
	map<string,int>:: iterator it;
	int n,b;
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a>>b;
		mp[a]=mp[a]+b;
	}
	/*
	for(it=mp.begin();it!=mp.end();it++)
	{
		if(mp[a[it]]!='0')
		cout<<a[it]<<" "<<mp[a[it]]<<"\n ";
		mp[a[it]]='0';
	}
	/*/
	for(it=mp.begin();it!=mp.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
}
