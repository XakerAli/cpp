#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int a,b,d,c,g,n;
	stack<int>st;
	stack<int>s;
	cout<<"Brininchi stack, nechta son kritasiz : ";
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		cin>>b;
		st.push(b);
	}
	cout<<"Ikkinchi stack nechta son kritasiz : ";
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		cin>>g;
		s.push(g);
	}
	cout<<st.size()<<" "<<s.size();
}
