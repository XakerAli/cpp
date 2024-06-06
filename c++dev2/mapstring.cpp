#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<string,bool>mp;
	string b,d;
	int a,c,s=0,v=0;
	for(int i=0;i<=a-1;i++)
	{
		cin>>b;
		mp[b]=true;
	}
	cin>>c;
	for(int i=0;i<=c-1;i++)
	{
		cin>>d;
		if(mp[d]==true)
		{
			s++;
		}
	}
	cout<<s;
}
