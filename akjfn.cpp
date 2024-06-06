#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
	vector<string>vc;
	map<string,bool>mp;
	map<string,bool>::iterator it;
	int a;
	string b;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		cin>>b;
		mp[b]=true;
	}
	for(it=mp.begin();it!=mp.end();it++)
	{
		cout<<it->first<<endl;
	}
}
