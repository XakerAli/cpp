#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<string>st,s;
	string a;
	int b;
	cin>>b;
	for(int i=0;i<=b-1;i++)
	{
		cin>>a;
		st.push(a);
		if(a=="non")
		{
			st.pop();
		};
	}
	for(int i=1;i<=st.size();i++)
	{
		cout<<st.top()<<endl;
		st.pop();
	}
}
	
