#include<iostream>
using namespace std;
int main()
{
	string a;
	int c=0;
	getline(cin,a);
	for(int i=0;i<=a.size();i++)
	{
		if(a[i]=='a')
		{
			a[i]=i+1;
		}
	cout<<a[i];
	}
}
