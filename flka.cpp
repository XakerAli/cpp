#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<string>st;
	stack<string>t;
	stack<string>s;
	int a;
	string b;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
		cin>>b;
		s.push(b);
	}
	cout<<"Bironta belgini o'chirish uchun 1 ni bosing \nO'z holicha qolishini istasangiz 2 ni bosing :";
	int b2,f=0;
	string h,g;
	cin>>b2;
	if(b2==1 or b2==2)
	{
		if(b2==1)
		{
			cout<<"======================================================================================"<<endl<<"Qaysi belgini o'chirishni istaysiz :";
			cin>>h;
			cout<<"======================================================================================\n";
			for(int i=0;i<=a-1;i++)
			{
				if(s.top()==h)
				{
					f++;
				}
				st.push(s.top()); 
				s.pop();
			}
			if(f>=1)
			{
				for(int i=0;i<=a-1;i++)
				{
					if(st.top()==h)
					{
						st.pop();
					}
					else
					{
						t.push(st.top());
						st.pop();
					}
				}
				cout<<"Berilgan belgi "<<f<<" ta";
				cout<<"Natija : ";
				for(int i=0;i<=a-1;i++)
				{
					cout<<t.top()<<' ';
					t.pop() ;
				}
			}
			else
			{
				cout<<"Berilgan belgi topilmadi ";
			}
		}
	if(b2==2)
	{
		cout<<"Raxmat";
	}
	}
	else
	{
		cout<<"Xato kritish";
	}
}
