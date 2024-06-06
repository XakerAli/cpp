#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int>de,dq;
	int n,a;
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a;
		de.push_back(a);
	}
	for(int i=0;i<=1000;i++)
	{
		dq.push_front(de.back());
		cout<<dq.front()<<' ';
		de.pop_back();
			for(int i=0;i<=1000;i++)
			{
				de.push_front(dq.back());
				cout<<de.front()<<' ';
				dq.pop_back();
			}
	}
}
