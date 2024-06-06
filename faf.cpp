#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>vc;
	vector<int>::iterator it;
	int n;
	cin>>n;
	int a;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a;
		vc.push_back(a);
	}
	for(it=vc.begin();it!=vc.end();it++)
	{
		cout<<*it<<" ";
	}
}
