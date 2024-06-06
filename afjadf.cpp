#include<iostream>
#include<deque>
using namespace std;
int main()
{
	string a;
	char f;
	int s=0;
	getline(cin,a);
	cin>>f;
	for(int i=0;i<=a.size()-1;i--)
	{
		if(a[i]==f)
		{
			s++;
		}
	}
	if(s>=1)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
