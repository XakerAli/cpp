#include<iostream>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	for(int i=0;i<=a.size()-1;i++)
	{
		if(a[i]=='7' or a[i]=='4')
		{
			i=i+1;
		}
		else
		cout<<a[i];
	}
}
