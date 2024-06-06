#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main()
{
	int a,d;
	deque<string>st;
	string b;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		cin>>b;
		cin>>d;
		if(d==1)
		{
			st.push_back(b);
		}
	}
	while(st.size())
	{
		cout<<st.front()<<endl;
		st.pop_front();
	}
}
