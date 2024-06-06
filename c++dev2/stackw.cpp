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
	int c,d=0,a1;
	cin>>c;
	for(int i=0;i<=a-1;i++)
	{
		if(s.top()==c)
		{
			d++;
		}
		t.push(s.top());
		s.pop();
	}
	if(d>=1)
	{
		cout<<"Berilgan belgi "<<d<<" ta o'chrish uchun 1 ni boshing ";
		cin>>a1;
	}
	else
	{
		cout<<"Berilgan belgi aniqlanmadi ! ";
	}
	if(a1==1)
	{
		for(int i=0;i<=a-1;i++)
		{
			if(t.top()==c)
			{
				t.pop();
			}
			else
			{
				st.push(t.top());
				t.pop();
			}
		}
	}
	for(int i=0;i<=a-1;i++)
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl<<" Yana topishni xohlasangiz 1ni bosing ";
	int b2;
	cin>>b2;
}
