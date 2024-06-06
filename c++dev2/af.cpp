#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<int>dq;
	int n,i=0,s=0,c=0,f=0,mx,a;
//	cin>>n;
	while(true)
	{
		s++;
		cin>>a;
		if(a!=0 and mx<a)
		{
			dq.push_back(a);
		}
		mx=a;
	}
	while(dq.size())
	{
		cout<<dq.front();
		dq.pop_front();
	}
}
