#include<vector>
#include<map>
using namespace std;
int main()
{
	int a,b,v;
	vector<int>vc;
	map<vector<int>,bool>mp;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		for(int j=0;j<=5-1;j++)
		{
			cin>>b;
			vc.push_back(b);
		}
		mp[vc]==true;
		vc.clear();
	}
	for(int i=0;i<=5-1;i++)
	{
		cin>>b;
		vc.push_back(b);
	}
	(mp[vc]==true)?cout<<"yes":cout<<"no";
}
