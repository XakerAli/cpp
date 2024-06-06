#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int a,b,d;
	string c;
	stack<string>st;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		cin>>b;
		if(b==1)
		{
			cin>>c;
			st.push(c);
		}
		if(b==2)
		{
			d=st.size();
			d=d-1;
		}
	}
	cout<<d;
}
