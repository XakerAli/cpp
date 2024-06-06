#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int>st;
	int a,n;
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		cin>>a;
		st.push(a);
	}
	for(int i=0;i<=n-1;i++)
	{
		cout<<st.top()<<' ';
		st.pop();
	}
}
