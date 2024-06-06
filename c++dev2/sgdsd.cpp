#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<string>st,s;
	string a;
	int b;
	cin>>b;
	for(int i=0;i<=b-1;i++)
	{
		cin>>a;
		if(a=="non")
		{
			st.pop_back();
		}
		else if(a=="shakar")
		{
			st.pop_front();
		}
		else
		{
			st.push_back(a);
		}
	}
	int c=st.size();
	while(c>0)
	{
		
		c--;
		cout<<st.front()<<endl;
		st.pop_front();
	}
}
	
