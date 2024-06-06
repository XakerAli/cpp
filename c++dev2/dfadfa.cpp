#include<iostream>
#include<map>
using namespace std;
int main()
{
	string a[100];
	map<string,int>mp;
	map<string,int>:: iterator it;
	int n;
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a[i];
		mp[a[i]]+=100;
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
