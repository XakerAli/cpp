#include<iostream>
#include<map>
using namespace std;
int main()
{
	int n;
	map<string,bool>mp;
	map<string,bool>::iterator it;
	string a,b;
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a>>b;
		mp[a]=true;
	}
	for(it=mp.begin();it!=mp.end();it++)
	{
		cout<<it<<endl;
	}
}
