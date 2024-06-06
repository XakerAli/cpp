#include<iostream>
#include<deque>
using namespace std;
int main()
{
	deque<string>de;
	int a;
	string b;
	cin>>a;
	for(int i=0;i<=a-1;i++)
	{
	cin>>b;
	de.push_front(b);//oldindan solish
//	de.push_back(b);//orqadan solish
	}
	for(int i=0;i<=a-1;i++)
	{
	cout<<de.back();
	de.pop_back();//pop_back orqadan o'chirish
 	}
	cout<<" Oldindan chiqarish : ";
	for(int i=0;i<=a-1;i++)
	{
  		cout<<de.front()<<' ';//oldidan chiqarish
		de.pop_front();//oldindan o'chirish
	}
	cout<<" Orqadan chiqarish : ";
}
