#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>st;
	stack<int>t;
	stack<int>s;
	int a,b;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		cin>>b;
		s.push(b);
	}
	for(int i=0;i<=a-1;i++)
	{
		t.push(s.top());
		s.pop();
	}
	for(int i=0;i<=a-1;i++)
	{
		cout<<t.top();
		t.pop() ;
	}
}
