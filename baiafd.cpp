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
		if(a!="non")
		{
			st.push(a);
			s.push(st.top()); 
		}
		if(a=="non")
		{
			st.pop();
		}
	}
	int c=s.size();
	while(c>0)
	{
		
		c--;
		cout<<s.top()<<endl;
		s.pop();
	}
}
	
